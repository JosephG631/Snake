#include <iostream>

#include "CollisionDetection.h"
#include "GameStates.h"
#include "PlayerData.h"
#include "rat.h"
#include "Snake.h"
#include "Sound.h"
CollisionDetection::CollisionDetection()
{

}

CollisionDetection::~CollisionDetection()
{
}

void CollisionDetection::update(Snake& snake, Rat& rat,  Arena& arena, GameStates& currentState, PlayerData& playerData,  Sound& soundManager )
{
	// checking collisions on all game objects
	checkArena( snake, arena, currentState, soundManager );
	checkRat(  snake,  rat,  playerData,arena, soundManager );
	checkSnake( snake, currentState, soundManager );

}
void CollisionDetection::checkRat(Snake&snake, Rat& rat, PlayerData& playerData, Arena& arena,  Sound& soundManager )
{
		// rat has eaten food
	 if ( snake.getHeadPosition() == rat.getPosition() ) 
	 {
		// play sound
		 soundManager.playEatFoodSound();

		//  increase the lenght of snake
		snake.addBody( 5 );

		// spawn a new rat inside the arena 
		rat.spawnRat( arena, snake ); 

		// increase a score 
		playerData.increaseScore();

		// update display
		playerData.setDisplaySnakeLength( snake.getLength() );
	 }
}

void CollisionDetection::checkSnake( Snake& snake, GameStates& currentState,  Sound& soundManager )
{
	for ( int i = 1; i < snake.getLength(); i++ )
	{
		// gets through each char body to see if it collides with the head of the snake 
		if ( snake.getHeadPosition() == snake.getBodyPositions( i ) )
		{
			// play death sound
			soundManager.playDieSound();

			// changing game state 
			currentState = GameStates::GameOver;
		}
	}
}

void CollisionDetection::checkArena( Snake& snake, Arena& arena, GameStates& currentState,  Sound& soundManager )
{
	// checking to see if the Head of the snake hits/goes outside the arena bounds. 
	if ( snake.getHeadXPosition() <= arena.getTopLeftCorner() || snake.getHeadXPosition() >= arena.getWidth() -1 || snake.getHeadYPosition() <= arena.getTopLeftCorner() || snake.getHeadYPosition() >= arena.getHeight() -1 )
	{
		// game is  over 

		// play death sound
		soundManager.playDieSound();

		/// change game state
		currentState = GameStates::GameOver;
	}
}
