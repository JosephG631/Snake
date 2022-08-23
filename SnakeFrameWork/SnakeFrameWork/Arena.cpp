#include <cstdlib>
#include <time.h>

#include "Arena.h"
#include "Helpers.h"
Arena::Arena()
	:m_border			( '-' )
	, m_topLeftCorner	( 0 )
{
	//adding the drawing point to the dimensions of the arena
	m_size.x = 50.00f+ m_topLeftCorner;
	m_size.y = 30.00f + m_topLeftCorner;
}

Arena::Arena(Vector2 arenaBounds,char border,int topLeftCorner )
	:m_border			( border )
	,m_topLeftCorner	( topLeftCorner )
	,m_size				( arenaBounds )
{
	//adding the drawing point to the dimensions of the arena
	m_size.x +=   m_topLeftCorner;
	m_size.y += m_topLeftCorner;
}

Arena::~Arena()
{
}
Vector2 Arena::randomPosition() 
{
	//srand uses time to set the seed of random to ensure its different everytime 
	srand( (int)time( 0 ) );

	//makes a random for x & y within the arena bounds
	m_randomPosition.x = rand() % ((int)m_size.x - 2 ) + m_topLeftCorner +1.00f;
	m_randomPosition.y = rand() % ((int)m_size.y - 2 ) + m_topLeftCorner + 1.00f;
	
	
	return m_randomPosition;
}
void Arena :: render()
{
	for ( int i = m_topLeftCorner; i < m_size.x; i++ )
	{
		
		//draw top and bottom line 
		for ( int b = m_topLeftCorner; b < m_size.y; b++ )
		{
			if ( i == m_topLeftCorner || i == m_size.x -1 )
			{
				//drawing the border char at the correct position
				Rendering::drawChar( m_border, i, b );
			}
			
			if ( b == m_topLeftCorner || b == m_size.y - 1 )
			{
				Rendering::drawChar( m_border, i, b );
			}
			
			
		}
	}
}
void Arena::unrender()
{
	//oppersite to render class. 
	for ( int i = m_topLeftCorner; i < m_size.x; i++ )
	{

		//draw top and bottom line 
		for ( int b = m_topLeftCorner; b < m_size.y; b++ )
		{
			if ( i == m_topLeftCorner || i == m_size.x - 1 )
			{
				//draw a space to "unrender" the char that was at that position
				Rendering::drawChar(' ', i, b );
			}

			if ( b == m_topLeftCorner || b == m_size.y - 1 )
			{
				Rendering::drawChar(' ', i, b );
			}


		}
	}
}
//getter & setters
const int& Arena::getTopLeftCorner() const
{
	return m_topLeftCorner;
}
const float& Arena::getHeight() const
{
	return  m_size.y;
}
const float& Arena::getWidth() const
{
	return m_size.x;
}
void Arena::setHeight( float y )
{
	m_size.y = y;
}
void Arena::setWidth(float x)
{
	m_size.x = x;
}