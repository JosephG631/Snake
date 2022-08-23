#include <conio.h>

#include "CharObject.h"
#include "Helpers.h"
CharObject::CharObject()
	: m_char ('R')
{
	m_position.x = 0;
	m_position.y = 0;
}

CharObject::~CharObject()
{
}

void CharObject::render() const
{
	//converts position from float to int and renders it at the int position
	Rendering::drawChar( m_char, static_cast<int>( m_position.x + 0.5f ), static_cast<int>( m_position.y + 0.5f ) );
}

void CharObject::unrender()
{
	//converts position from float to int and unrenders at the drawn char position
	Rendering::drawChar( ' ', static_cast<int>( m_position.x + 0.5f ), static_cast<int>( m_position.y + 0.5f ) );
}
//getters & setters 
void CharObject::setXPosition( float x )
{
	m_position.x = x;
}
void CharObject::setYPosition( float y )
{
	m_position.y = y;
}
void CharObject::setPosition( Vector2 position )
{
	m_position = position;
}
void CharObject::setChar( char _char )
{
	m_char = _char;
}
const float& CharObject::getXPosition() const
{
	return m_position.x;
}
const float& CharObject::getYPosition() const
{
	return m_position.y;
}
const Vector2& CharObject::getPosition() const
{
	return m_position;
}

const char& CharObject::getChar() const
{
	return m_char;
}
