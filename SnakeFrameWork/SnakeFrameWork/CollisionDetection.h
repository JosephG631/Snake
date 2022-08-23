#ifndef COLLISIONDETECTION_H
#define COLLISIONDETECTION_H

#include "GameStates.h"
#include "PlayerData.h"
#include "rat.h"
#include "Sound.h"
#include "Snake.h"
//-----------------------------------------------
// Class	: CollisionDetection
// Purpose	: To control all collision within  the game bewteen game objects
// Usage	: 
//				void checkRat( Snake& snake, Rat& rat, PlayerData& playerData, Arena& arena,  Sound& soundManager )
//				void checkSnake( Snake& snake, GameStates& currentState, Sound& soundManager )
//				void checkArena( Snake& snake, Arena& arena, GameStates& currentState, Sound& soundManager )
//				CollisionDetection()
//				~CollisionDetection()
//				void update( Snake& snake, Rat& m_rat, Arena& arena, GameStates& currentState, PlayerData& playerData, Sound& soundManager )            
// See also	: Rat.h , snake.h, Arena.h
//-----------------------------------------------
class CollisionDetection
{
private:
	//-----------------------------------------------
	// Function		: checkRat
	// Purpose		: To check rat collisions
	// Parameters	: Snake& snake, Rat& rat, Arena&, arena, PlayerData playerData ,Arena& arena,  Sound& soundManager
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	void checkRat( Snake& snake, Rat& rat, PlayerData& playerData, Arena& arena,  Sound& soundManager );
	//-----------------------------------------------
	// Function		: checkSnake
	// Purpose		: To check snake collision with itself
	// Parameters	: Snake& snake,GameStates& currentState, Sound soundManager
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	void checkSnake( Snake& snake, GameStates& currentState,  Sound& soundManager );
	//-----------------------------------------------
	// Function		: checkArena
	// Purpose		: To check the snake stays within arena bounds
	// Parameters	: Snake& snake,GameStates& currentState , Arena& arena, Sound Manager
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	void checkArena( Snake& snake, Arena& arena, GameStates& currentState, Sound& soundManager );
public:
	//-----------------------------------------------
	// Function		: CollisionDection
	// Purpose		: Default constructor
	// Parameters	: 
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	CollisionDetection();
	//-----------------------------------------------
	// Function		: ~CollisionDection
	// Purpose		: decontructor 
	// Parameters	: 
	// Returns		: void
	// Notes		: Don't call
	// See also		: 
	//-----------------------------------------------
	~CollisionDetection();
	//-----------------------------------------------
	// Function		: update
	// Purpose		: To check collision of game objects
	// Parameters	: Snake& snake, Rat& rat, Arena&, arena, Gamestates& gameState, Playerdata playerData, SoundManager
	// Returns		: void
	// Notes		: none of these refereances are const as they are all changed within the class
	// See also		: 
	//-----------------------------------------------
	void update(Snake& snake,Rat& m_rat, Arena& arena , GameStates& currentState,PlayerData& playerData,  Sound& soundManager );

};


#endif // !COLLISIONDETECTION_H
