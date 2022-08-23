#ifndef SNAKEHEAD_H
#define SNAKEHEAD_H

#include "Directions.h"
#include "SnakeComponent.h"
//-----------------------------------------------
// Class	: SnakeHead
// Purpose	: To manage a SnakeHead object.
// Usage	:	SnakeHead snakeHead;
//				void checkDirection( const Directions& direction )
//				void move( float deltaTime )
//				SnakeHead()
//				SnakeHead( char head, Vector2 startPos, float speed )
//				~SnakeHead()
//				void update( const Directions& direction, float deltaTime )
//				void setXDirection( int x )
//				void setYDirection( int y )
//				int getXDirection() const
//				int getYDirection() const            
// See also	: Snake , SnakeComponent, CharObject
//-----------------------------------------------
class SnakeHead : public SnakeComponent
{
private:
	int m_xDirection; // x movement direction
	int m_yDirection; // y movement direction
	float  m_speed;   // snakes movement speed
	//-----------------------------------------------
	// Function		: checkDirection
	// Purpose		: To update the direction of the snake depending on users input
	// Parameters	: const Directions& direction 
	// Returns		: void
	// Notes		: 
	// See also		: InputManager.h
	//-----------------------------------------------
	void checkDirection( const Directions& direction );
	//-----------------------------------------------
	// Function		: move
	// Purpose		: To move the snake in the set direction
	// Parameters	: float deltaTime
	// Returns		: void
	// Notes		: 
	// See also		: InputManager.h, checkDirection
	//-----------------------------------------------
	void move(float deltaTime);
public:
	//-----------------------------------------------
	// Function		: SnakeHead
	// Purpose		: default constructor
	// Parameters	: 
	// Returns		: void
	// Notes		:
	// See also		: 
	//-----------------------------------------------
	SnakeHead();
	//-----------------------------------------------
	// Function		: SnakeHead
	// Purpose		: To pass through settings into the snakeHead
	// Parameters	: char head, Vector2 startPos, float speed
	// Returns		: void
	// Notes		:
	// See also		: 
	//-----------------------------------------------
	SnakeHead( char head, Vector2 startPos, float speed );
	//-----------------------------------------------
	// Function		: ~SnakeHead
	// Purpose		: decontructor
	// Parameters	: 
	// Returns		: void
	// Notes		: Don't call 
	// See also		: 
	//-----------------------------------------------
	 ~SnakeHead();
	//-----------------------------------------------
	// Function		: update
	// Purpose		: To update a SnakeHead. 
	// Parameters	: const Directions& direction, float deltaTime
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	 void update( const Directions& direction, float deltaTime );
	//getters & setters 
	//-----------------------------------------------
	// Function		: setXDirection
	// Purpose		: To set the direaction of snake 
	// Parameters	: int x
	// Returns		: void
	// Notes		: 
	// See also		: setYDireaction
	//-----------------------------------------------
	void setXDirection( int x );
	//-----------------------------------------------
	// Function		: setYDirection
	// Purpose		: To set the direaction of snake 
	// Parameters	: int y
	// Returns		: void
	// Notes		: 
	// See also		: setXDireaction
	//-----------------------------------------------
	void setYDirection( int y );
	//-----------------------------------------------
	// Function		: getXDirection
	// Purpose		: To set the direaction of snake 
	// Parameters	: 
	// Returns		: const int& m_xDireaction
	// Notes		: 
	// See also		: getYDireaction
	//-----------------------------------------------
	const int& getXDirection() const;
	//-----------------------------------------------
	// Function		: getYDirection
	// Purpose		: To set the direaction of snake 
	// Parameters	: 
	// Returns		: const int& m_yDireaction
	// Notes		: 
	// See also		: getXDireaction
	//-----------------------------------------------
	const int& getYDirection() const;
};
#endif
