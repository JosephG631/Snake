#include <conio.h>
#include <iostream>
#include <Windows.h>

#include "Directions.h"
#include "GameStates.h"
#include "InputManager.h"
#include "KeyInput.h"


InputManager::InputManager()
	: m_keyDown	(  )

{
	
	m_keyToCheck[0] = ( 38 ); // up keycode
	m_keyToCheck[1] = ( 39 ); // Right keycode
	m_keyToCheck[2] = ( 40 ); // Down keycode
	m_keyToCheck[3] = ( 37 ); // Left keycode
	m_keyToCheck[4] = ( 13 ); // Enter keycode
	m_keyToCheck[5] = ( 27 ); // Esc keycode
}
InputManager::~InputManager()
{
}

void InputManager::update( Directions& direction, GameStates& currentState )
{

	checkInput();

	if( currentState == GameStates::GameActive )
	{
		// check to see if the direction has changed
		checkDirection( direction );

	}
	else
	{
		// if not in game check menu inputs
		checkMenuInput( currentState );
	}
	// if esc pressed exit application
	if( m_keyDown == KeyInput::Esc)
	{
		system( "cls" );

		// exits application 
		exit( 1 );
	}
}

void InputManager::checkMenuInput( GameStates& currentState )
{
	if( m_keyDown == KeyInput::Enter && currentState == GameStates::MainMenu )
	{
		// if the enter key is pressed start game
		currentState = GameStates::GameActive;

		//clears screen 
		system( "cls" ); 

		// reset key 
		m_keyDown = (KeyInput)0;
		
	}
	if( m_keyDown == KeyInput::Enter && currentState == GameStates::GameOver)
	{
		// if the game is over , user can press enter to get to the main menu. 
		currentState = GameStates::MainMenu;

		// clears screen 
		system( "cls" ); 

		//reset key
		m_keyDown = (KeyInput)0;
	}

}
	

void InputManager::checkInput( )
{
	

	// loop and check each keyCode ( gets the size of the total  array  and divdes it by the first element )
	for( int i = 0; i < ( sizeof( m_keyToCheck ) / sizeof( *m_keyToCheck ) ); i++ )
	{
		// if that key is down
		bool keyDown = (bool)( GetAsyncKeyState( m_keyToCheck[i] ) & 0x8000 );

		if( keyDown == true )
		{
			// set the arrow key enum to the true key
			m_keyDown = (KeyInput)m_keyToCheck[i];
		}
	}
	
}

void InputManager::checkDirection( Directions& direction )
{
	//if an arrow key was pressed 
	switch ( m_keyDown )
	{
	case KeyInput::Up:
	{
		// check if the last direction was not the opposite
		if( direction != Directions::Down )
		{
			//head go up
			direction = Directions::Up;
		}
	}
	break;
	case KeyInput::Down:
	{
		// check if the last direction was not the opposite
		if( direction != Directions::Up )
		{
			//head go down
			direction = Directions::Down;
		}
	}
	break;

	case KeyInput::Left:
	{
		// check if the last direction was not the opposite
		if( direction != Directions::Right )
		{
			//head go left
			direction = Directions::Left;
		}
	}
	break;

	case KeyInput::Right:
	{
		// check if the last direction was not the opposite
		if( direction != Directions::Left )
		{
			//head go right 
			direction = Directions::Right;
		}
	}
	break;
	default:
	{
		//default exists
	}
	break;
	}
}


