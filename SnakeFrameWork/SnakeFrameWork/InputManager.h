#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "GameStates.h"
#include "KeyInput.h"
//-----------------------------------------------
// Class	: InputManager
// Purpose	: To manage user inputs
// Usage	: 
//				void checkInput()
//				void checkDirection( Directions& direction )
//				InputManager()
//				~InputManager()
//				void update( Directions& direction, GameStates& currentState )
//				void checkMenuInput( GameStates& currentState )     
// See also	: SnakeHead
//-----------------------------------------------
class InputManager
{

private:
	int				m_keyToCheck[6];	// list of key codes to check
	KeyInput		m_keyDown;			// store the key that is pressed 

	//-----------------------------------------------
	// Function		: checkInput
	// Purpose		: Checks only the arrow keys on the keyboard 
	// Parameters	:  
	// Returns		: void
	// Notes		: 
	// See also		: checkDirection()
	//-----------------------------------------------
	void checkInput();
	//-----------------------------------------------
	// Function		: checkDirection
	// Purpose		: Checks to see if the direction has changed 
	// Parameters	: Direction& direction
	// Returns		: void
	// Notes		: 
	// See also		: checkInput
	//-----------------------------------------------
	void checkDirection( Directions& direction );
public:
	//-----------------------------------------------
	// Function		: InputManager
	// Purpose		: default constructor
	// Parameters	:
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	InputManager();
	//-----------------------------------------------
	// Function		: ~InputManager
	// Purpose		: deconstructor 
	// Parameters	:
	// Returns		: void
	// Notes		: Don't call
	// See also		: 
	//-----------------------------------------------
	~InputManager();
	//-----------------------------------------------
	// Function		: update
	// Purpose		: To check for inputs every cycle
	// Parameters	: Directions& direction , GameStates& currentState
	// Returns		: void
	// Notes		: sets the direction for snakeHead
	// See also		: SnakeHead
	//-----------------------------------------------
	void update(Directions& direction, GameStates& currentState  );
	//-----------------------------------------------
	// Function		: checkMenuInput
	// Purpose		: To check if a input has been given on a menu
	// Parameters	: GameStates& currentState
	// Returns		: void
	// Notes		: press button currently changes scene
	// See also		: Game.h
	//-----------------------------------------------
	void checkMenuInput(GameStates& currentState );
};
	


#endif // !INPUTMANAGER_H

