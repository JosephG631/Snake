#include "Directions.h"
#include "SnakeHead.h"
#include <cmath>
#include <iostream>

SnakeHead::SnakeHead()
	: m_xDirection( 0 )
	, m_yDirection( 0 )
	, m_speed     ( 20.00f ) 
{
	// initialize values of parent 
	CharObject::setChar( '>' );
	CharObject::setXPosition( 5 );
	CharObject::setYPosition( 5 );
}

SnakeHead::~SnakeHead()
{
}

SnakeHead::SnakeHead( char head, Vector2 startPos, float speed )
	: m_xDirection  ( 0 )
	, m_yDirection  ( 0 )
	, m_speed		(speed)
	
{
	// initialize values of parent 
	CharObject::setChar( head );
	CharObject::setPosition( startPos );
}


void SnakeHead::update( const Directions& direction,float deltaTime )
{
	// move head
	move(deltaTime);

	// check if direction has changed 
	checkDirection(  direction );
}
void SnakeHead::checkDirection( const Directions& direction )
{

	switch ( direction )
	{
	case Directions::Up:
	{
		m_yDirection = -1;
		m_xDirection = 0;
	}

	break;
	case Directions::Down:
	{
		m_yDirection = 1;
		m_xDirection = 0;

	}
	break;
	case Directions::Right:
	{
		m_yDirection = 0;
		m_xDirection = 1;
	}
	break;
	case Directions::Left:
	{
		m_yDirection = 0;
		m_xDirection = -1;
	}
	break;
	default:
		//
		break;
	}
	
}

void SnakeHead::move(float deltaTime)
{
	// moving the snake head after direction is set 
	CharObject::setXPosition( CharObject::getXPosition() + m_xDirection *  ( m_speed * deltaTime ) );
	CharObject::setYPosition( CharObject::getYPosition() + m_yDirection * ( m_speed * deltaTime ));
}

// getters & setters 
void SnakeHead::setXDirection( int x )
{
	m_xDirection = x;
}
void SnakeHead::setYDirection( int y )
{
	m_yDirection = y;
}


const int& SnakeHead::getXDirection() const
{
	return m_xDirection;
}
const int& SnakeHead::getYDirection() const
{
	return m_yDirection;
}