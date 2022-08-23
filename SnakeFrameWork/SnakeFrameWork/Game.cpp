#include <Windows.h>

#include "Arena.h"
#include"CollisionDetection.h"
#include"Directions.h"
#include "Game.h"
#include "Helpers.h"
#include "InputManager.h"
#include "Rat.h"
#include "Snake.h"
#include "Timer.h"

// create game with the default values from the settings page.
Game::Game()
	:m_snake			(m_setting.getSnakeLength(),m_setting.getDefaultSnakeHeadPosition(),m_setting.getHeadChar(), m_setting.getSnakeBodyChar(),m_setting.getSpeed(), m_setting.getMaxSnakeLength())
	,m_arena			(m_setting.getArenaBounds(),m_setting.getArenaChar(),m_setting.getTopLeftCorner())
	,m_direction		(m_setting.getDefaultDirection())
	, m_currentState	(m_setting.getStartingState())
	, m_playerData		(m_setting.getScoreIncrease(),m_setting.getSnakeLength(),m_setting.getBonusScore())
	,m_gameReset		(true)
	,m_gameTimeStarted  (false)
	, m_timePlayed		(0.0f)
{
	// spawn the first rat collectable 
	m_rat.spawnRat( m_arena, m_snake );

	//start timer to calulate deltaTime
	m_timer.start();

	// set default colour
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), m_setting.getOtherColour() );
}
void Game::update()
{
	clear();
	
	while(true)
	{
		// check for any keyboard inputs 
		m_inputManager.update( m_direction, m_currentState );

		// check which state the game is in
		switch ( m_currentState )
		{
			case GameStates::GameActive:
				{
					// when game is active update gj & unrender them 
					unrender();
					gameUpdate();
					
				}
				break;
			case GameStates::MainMenu:
			{
				if ( m_gameReset == false )
				{
					// reset values so game can be played again
					restartGame();
				}
			}
			break;
			case GameStates::GameOver: 
			{
				// work out high score so it canbe displayed to the user 
				m_playerData.calculateHighScore();

				if( m_gameReset == true )
				{
					// clear screen when state changed
					clear();

					// get the time played.
					m_timePlayed = m_playerData.getTimePlayed();
				}
				m_gameReset = false;
			}
			break;
		}
		render();
		Sleep( 1000/60 );
		
	}
}
void Game::restartGame()
{
	// reseting all values to the default for a new game. 
	m_snake = Snake( m_setting.getSnakeLength(), m_setting.getDefaultSnakeHeadPosition(), m_setting.getHeadChar(), m_setting.getSnakeBodyChar(), m_setting.getSpeed(), m_setting.getMaxSnakeLength() );

	// respawn rat
	m_rat.spawnRat( m_arena, m_snake );

	// set starting direction to default 
	m_direction = m_setting.getDefaultDirection();

	// reset player data
	m_playerData.setScore( 0 );
	m_playerData.setDisplaySnakeLength( m_setting.getSnakeLength() );

	// game has been reset
	m_gameReset = true;

	//reset diisplay timer 
	m_gameTimeStarted = false;
}
void Game::unrender()
{
	// remove these gj from the screen
	m_arena.unrender();
	m_snake.unrender();
	m_rat.unrender();
}
void Game::gameUpdate()
{
	// set deltaTime
	float deltaTime = m_timer.getElapsedSeconds();

	// restart timer for deltatime
	m_timer.start();

	// if game active update snake and check for collisions
	m_snake.update( m_direction, deltaTime );
	m_collision.update( m_snake, m_rat, m_arena, m_currentState, m_playerData, m_soundManager );

	if( m_gameTimeStarted == false )
	{
		//start game timer & only do it once 
		m_playerData.startGameTimer();
		m_gameTimeStarted = true;
	}
}
void Game::clear()
{
		system( "cls" ); //clears screen 
}
void Game::render() 
{
	// draw game objects
	if ( m_currentState == GameStates::GameActive )
	{
		//drawing all gameObjects needed for game play
		//setting the colour for each gj
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), m_setting.getSnakeColour() );
		m_snake.render();
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), m_setting.getArenaColour() );
		m_arena.render();
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), m_setting.getRatColour() );
		m_rat.render();
		SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), m_setting.getOtherColour() );
		m_playerData.render();
	}
	if ( m_currentState == GameStates::GameOver )
	{
		// drawing game over text 
		Rendering::drawString( "Game Over", 10, 10 );
		Rendering::drawString( "Your score was:" + std::to_string( m_playerData.getScore() ), 10, 12 );
		Rendering::drawString( "Your highscore is :" + std::to_string( m_playerData.getHighScore() ), 10, 13 );
		Rendering::drawString( "Time lasted: " + std::to_string(m_timePlayed), 10, 14 );
		Rendering::drawString( "Press enter to go to menu", 10, 15 );
	}
	if ( m_currentState == GameStates::MainMenu )
	{	// drawing main menu text
		Rendering::drawString( "SNAKE", 10, 12 );
		Rendering::drawString( "Please play on full screen. Controls are arrow keys.", 4, 19 );
		Rendering::drawString( "made by Joseph Gilmore", 4, 25 );
		Rendering::drawString( "Main Menu", 10, 10 );
		Rendering::drawString( "Press enter to start Game", 10, 14 );
		Rendering::drawString( "Close the application at any time with \"ESC\".", 4, 20 );

	}
}


