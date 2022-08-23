#ifndef GAME_H
#define GAME_H

#include "Arena.h"
#include "CollisionDetection.h"
#include "Directions.h"
#include "GameStates.h"
#include "InputManager.h"
#include "PlayerData.h"
#include "Rat.h"
#include "Settings.h"
#include "Snake.h"
#include "Sound.h"
#include "Timer.h"

//-----------------------------------------------
// Class	: Game
// Purpose	: To manage entire game & loop
// Usage	:	
//				void render()
//				void clear()
//				void restartGame()
//				void unrender()
//				void gameUpdate()
//				Game()
//				void update()
// See also	: most classes interact with game
//-----------------------------------------------
class Game
{
private:
	// vars
	Settings            m_setting;			// contains all the default starting values
	Directions			m_direction;		// used for the direction of the snake
	Snake				m_snake;			// snake game object 
	InputManager		m_inputManager;		// handles all input for all states
	Arena				m_arena;			// game area 
	Rat					m_rat;				// game collectable 
	CollisionDetection	m_collision;		// handles game collision
	Timer				m_timer;			// timer for deltaTime
	GameStates          m_currentState;		// state machine 
	PlayerData          m_playerData;		// holds the user game data
	Sound				m_soundManager;		// controls sound
	bool				m_gameReset;		// check to see if the game has been reset
	bool				m_gameTimeStarted;	// check to see if timer started
	float				m_timePlayed;		// store the time it took to complete a game 
	//-----------------------------------------------
	// Function		: render
	// Purpose		: To render the entire game
	// Parameters	: 
	// Returns		: 
	// Notes		: calls each class render
	// See also		: any class .render()
	//-----------------------------------------------
	void render();
	//-----------------------------------------------
	// Function		: clear
	// Purpose		: To clear the game screen
	// Parameters	: 
	// Returns		: 
	// Notes		: used when changing states & starting game
	// See also		: 
	//-----------------------------------------------
	void clear();
	//-----------------------------------------------
	// Function		: restartGame
	// Purpose		: To reset the values of the game when state has changed
	// Parameters	: 
	// Returns		: 
	// Notes		: uses settings values and reset current values
	// See also		: settings.h
	//-----------------------------------------------
	void restartGame();
	//-----------------------------------------------
	// Function		: unrender()
	// Purpose		: To remove rendered objects from the screen
	// Parameters	: 
	// Returns		: 
	// Notes		:
	// See also		: render()
	//-----------------------------------------------
	void unrender();
	//-----------------------------------------------
	// Function		: gameUpdate
	// Purpose		: To update the gameActive state
	// Parameters	: 
	// Returns		: 
	// Notes		:
	// See also		: render()
	//-----------------------------------------------
	void gameUpdate();
public:
	//constructor
	Game ();
	//-----------------------------------------------
	// Function		: update
	// Purpose		: To update the entire game loop
	// Parameters	: 
	// Returns		: 
	// Notes		: calls each class updates
	// See also		: any class .update()
	//-----------------------------------------------
	void update();
};
#endif //!GAME_H