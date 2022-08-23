#include "SnakeBody.h"
#include "SnakeHead.h"

SnakeBody::SnakeBody(  )
	: m_snakeLength (5)
{
	// creating array of snake component for the body.
	m_pSnakeComponent = new SnakeComponent[1500];
}

SnakeBody::SnakeBody( int snakeLength, char bodyChar, int maxLength )
	: m_snakeLength(snakeLength)
	
{
	// creating array of snake component for the body.
	 m_pSnakeComponent = new SnakeComponent[maxLength];

	for ( int i = 0; i < maxLength; i++ )
	{
		// setting all the components to the default char 
		m_pSnakeComponent[i].setChar( bodyChar );
	}
}

SnakeBody::~SnakeBody()
{
	if ( m_pSnakeComponent != nullptr )
	{
		// set to null to delete completetly 
		m_pSnakeComponent = nullptr;
		delete[] m_pSnakeComponent;
	}
}
void SnakeBody::update( const SnakeHead& snakeHead, const int& snakeLength )
{
	m_snakeLength = snakeLength;

	// move the body
	move( snakeHead );
}
void SnakeBody::move(const SnakeHead& snakeHead)
{
	
	m_pSnakeComponent[0].setPosition( snakeHead.getPosition() );

	for ( int i = 1; i < m_snakeLength; i++ )
	{
		// storing the last position of the body temporarily 
		m_lastPositionTemp = m_pSnakeComponent[i].getPosition();

		// set the current body to the last positon of the  last element in the array looped 
		m_pSnakeComponent[i].setPosition( m_lastPosition );

		// set the previous position of the current element for the next one
		m_lastPosition = m_lastPositionTemp;
	}

	// reset position
	m_lastPosition =  m_pSnakeComponent[0].getPosition();

	
}
void SnakeBody::render() const
{
	for ( int i = 0; i < m_snakeLength; i++ )
	{
		// render the entire snake
		m_pSnakeComponent[i].render();
	}
}

void SnakeBody::unrender() const
{
	for ( int i = 0; i < m_snakeLength; i++ )
	{
		// unrender the entire snake 
		m_pSnakeComponent[i].unrender();
	}

}


const Vector2& SnakeBody::getSnakeComponentPosition( int i ) const
{
	// used to get any positons of any of the snake bodys
	return m_pSnakeComponent[i].getPosition();
}