#ifndef SNAKE_H
#define SNAKE_H

#include "Directions.h"
#include "InputManager.h"
#include "SnakeBody.h"
#include "SnakeHead.h"
#include"Vector2.h"
//-----------------------------------------------
// Class	: Snake
// Purpose	: To manage a Snake object
// Usage	:	
//			Snake()
//			Snake( int snakeLength, const Vector2 startPosition, char snakeHeadChar, char snakeBodyChar, float speed, int maxLength )
//			~Snake()
//			void update( const Directions& direction, float deltaTime )
//			void render()
//			void unrender()
//			void addBody( int lenghtIncrease )
//			void setLength( int length )
//			const float& getHeadXPosition() const
//			const float& getHeadYPosition() const
//			const int& getLength() const
//			void setHeadPosition( Vector2 position )
//			const Vector2& getHeadPosition() const
//			const Vector2& getBodyPositions( int i ) const                      
// See also	: SnakeHead & SnakeBody for memembers
//-----------------------------------------------
class Snake
{
private:
	
	//Vars
	SnakeHead	m_snakeHead;	// creating the head of the snake 
	int			m_snakeLength;  // setting the length of the snake
	SnakeBody	m_snakeBody;    // creating the body which will follow the head

public:
	//-----------------------------------------------
	// Function		: Snake
	// Purpose		: default constructor 
	// Parameters	:  
	// Returns		:
	// Notes		: 
	// See also		:
	//-----------------------------------------------
	Snake();
	//-----------------------------------------------
	// Function		: Snake
	// Purpose		: Constructor to pass in all elements of a snake so it can be a controlled by a settings page
	// Parameters	: int snakeLength, const Vector2 startPosition, char snakeHeadChar, char snakeBodyChar, float speed,int maxLength
	// Returns		: void
	// Notes		: 
	// See also		: Snake();
	//----------------------------------------------
	Snake(int snakeLength, const Vector2 startPosition, char snakeHeadChar, char snakeBodyChar, float speed,int maxLength ); 
	//-----------------------------------------------
	// Function		: ~Snake
	// Purpose		: deconstructor 
	// Parameters	:  
	// Returns		:
	// Notes		: Don't call
	// See also		:
	//----------------------------------------------
	~Snake();
	//-----------------------------------------------
	// Function		: update
	// Purpose		: To update a Snake object
	// Parameters	: const Directions& direction, float deltaTime
	// Returns		: void
	// Notes		: Updates SnakeHead & SnakeBody
	// See also		: SnakeHead.update & SnakeBody.update
	//-----------------------------------------------
	void update(const Directions& direction, float deltaTime );
	//-----------------------------------------------
	// Function		: render
	// Purpose		: To render the snake 
	// Parameters	: None
	// Returns		: void
	// Notes		: 
	// See also		: game.render()
	//-----------------------------------------------
	void render();
	//-----------------------------------------------
	// Function		: unrender
	// Purpose		: To unrender the snake 
	// Parameters	: None
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	void unrender();
	//-----------------------------------------------
	// Function		: addBody
	// Purpose		: To increase the body size of the snake
	// Parameters	: Int lengthIncrese
	// Returns		: void
	// Notes		: used when user eats a rat
	// See also		: Rat.h
	//-----------------------------------------------
	void addBody(int lenghtIncrease); 
	//getters & setters
	//-----------------------------------------------
	// Function		: setLength
	// Purpose		: To set length of the snake from another class 
	// Parameters	: int length
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	void setLength(int length);
	//-----------------------------------------------
	// Function		: getHeadXposition
	// Purpose		: gets the position of the front of the snake
	// Parameters	: None
	// Returns		: int m_snakeHead.x
	// Notes		: This currently gets the heads position but might change this to be more adaptbale 
	// See also		:  
	//-----------------------------------------------
	const float& getHeadXPosition() const;
	//-----------------------------------------------
	// Function		:  getHeadYposition
	// Purpose		: gets the  position of the snake head
	// Parameters	: None
	// Returns		: onst float& m_snakeHead.y
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	const float& getHeadYPosition() const;
	//-----------------------------------------------
	// Function		: getLength
	// Purpose		: gets the total length of the snake including the body/head
	// Parameters	: none
	// Returns		: const float& m_snakeLength
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	const int& getLength() const;
	//-----------------------------------------------
	// Function		: setHeadPosition
	// Purpose		: set the position of the head
	// Parameters	: Vector2 position
	// Returns		:  
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	void setHeadPosition( Vector2 position );
	//-----------------------------------------------
	// Function		: getHeadPosition
	// Purpose		: gets the snakeheads vector2
	// Parameters	: 
	// Returns		: const Vector2& m_snakeHead.getPosition()
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	const Vector2& getHeadPosition() const;
	//-----------------------------------------------
	// Function		: getBodyPositions
	// Purpose		: gets any snakeBodyPosition needed 
	// Parameters	: 
	// Returns		: m_snakeBody.getSnakeComponentPosition( i );
	// Notes		: This currently is a gain of getters 
	// See also		: SnakeBpdy.getSnakeComponentPosition( int i )
	//----------------------------------------------
	const Vector2& getBodyPositions( int i ) const;

};
#endif // !SNAKE_H

