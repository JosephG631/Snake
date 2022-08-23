#include "Directions.h"
#include "InputManager.h"
#include "Snake.h"

Snake::Snake()
	:m_snakeLength			( 5 )
{
	
}
//passing through the default settings 
Snake::Snake( int snakeLength, const Vector2 startPosition, char snakeHeadChar, char snakeBodyChar, float speed, int maxLength )
	: m_snakeLength( snakeLength )
	, m_snakeHead( snakeHeadChar, startPosition, speed )
	, m_snakeBody( snakeLength, snakeBodyChar, maxLength )
{
	
}
Snake::~Snake()
{
	
}
void Snake::update( const Directions& direction, float deltaTime )
{	
	//updating the whole snake 
	m_snakeBody.update( m_snakeHead, m_snakeLength);
	m_snakeHead.update(  direction, deltaTime );

}

void Snake::render()
{
	//render head and the snake body to draw the complete snake
	m_snakeHead.render();
	m_snakeBody.render( );
}

void Snake::unrender()
{
	//remove snake from screen
	m_snakeHead.unrender();
	m_snakeBody.unrender();
}

void Snake::addBody(int lengthIncrease)
{
	//adds to the length of the snake so when it loop through it loops through the length of the snake 
	m_snakeLength += lengthIncrease;
}
//getters & setters 
void Snake::setLength(int length)
{
	m_snakeLength = length;
}
const int& Snake::getLength() const
{
	return m_snakeLength;
	
}
void Snake::setHeadPosition(Vector2 position )
{
	m_snakeHead.setPosition( position ); 
	
}
const Vector2&  Snake::getHeadPosition() const
{
	return m_snakeHead.getPosition();
}
const float& Snake::getHeadXPosition() const
{
	return m_snakeHead.getXPosition();
	
}
const float& Snake::getHeadYPosition() const
{
	return m_snakeHead.getYPosition();
}
const Vector2& Snake::getBodyPositions( int i ) const
{
	return m_snakeBody.getSnakeComponentPosition( i );
}

