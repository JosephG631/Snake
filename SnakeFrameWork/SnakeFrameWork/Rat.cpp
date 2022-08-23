#include "Arena.h"
#include "Helpers.h"
#include "rat.h"
#include "Snake.h"

Rat::Rat()
{
	// initialize values
	m_randomPosition.x = 0;
	m_randomPosition.y = 0;
	
}
Rat::~Rat()
{

}

void Rat::spawnRat( Arena& arena ,Snake& snake)
{
	// get randomPosition
	m_randomPosition = arena.randomPosition();

	// checking to see if the rat has spawn at the current head 
	while ( m_randomPosition == snake.getHeadPosition() )
	{ 
		// if it has randomise it again 
		m_randomPosition = arena.randomPosition();
	}
	if ( m_randomPosition != snake.getHeadPosition() )
	{
		// set position of rat 
		CharObject::setPosition(m_randomPosition);
	}
	for ( int i = 0; i < snake.getLength(); i++ )
	{
		// checking all the body positions
		while ( m_randomPosition == snake.getBodyPositions( i ) )
		{
			// if the same create a new position
			m_randomPosition = arena.randomPosition();
		}
		if ( m_randomPosition != snake.getBodyPositions( i ))
		{
			// draw new position
			CharObject::setPosition( m_randomPosition );
		}
	}
	
}

