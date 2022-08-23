#ifndef CHAROBJECT_h
#define CHAROBJECT_h

#include "Vector2.h"
//-----------------------------------------------
// Class	: CharObject
// Purpose	: To act as a parent for a single char with a position & render
// Usage	:	
//			CharObject()
//			~CharObject()	
//          void render() const
//			void unrender()
//			void setXPosition( float x )
//			void setYPosition( float y )
//			void setChar( char _char )
//			const float& getXPosition() const
//			const float& getYPosition() const
//			const Vector2& getPosition() const
//			void setPosition( Vector2 position )
//			const char& getChar() const
// See also	: SnakeHead.h, SnakeComponent.h,SnakeBody.h
//-----------------------------------------------
class CharObject
{
private:
	char		m_char;			// used to represent most gjs
	Vector2		m_position;		// The position of rendered char 
public:
	//-----------------------------------------------
	// Function		: CharObject 
	// Purpose		: default constructor 
	// Parameters	: 
	// Returns		: void
	// Notes		:  
	// See also		:
	//-----------------------------------------------
	CharObject();
	//-----------------------------------------------
	// Function		: ~CharObject 
	// Purpose		: deconstructor
	// Parameters	: 
	// Returns		: void
	// Notes		: Don't call
	// See also		:
	//-----------------------------------------------
	~CharObject();
	//-----------------------------------------------
	// Function		: render const
	// Purpose		: To render a single char at a position
	// Parameters	: 
	// Returns		: void
	// Notes		:  
	// See also		: Rat.h,SnakeHead, SnakeComponent
	//-----------------------------------------------
	void render() const ;
	//-----------------------------------------------
	// Function		: unrender 
	// Purpose		: To unrender a single char at a position
	// Parameters	: 
	// Returns		: void
	// Notes		:  
	// See also		: Game.unrender()
	//-----------------------------------------------
	void unrender();
	//-----------------------------------------------
	// Function		: setXPosition
	// Purpose		: To set position of rendered char
	// Parameters	: float x 
	// Returns		: void
	// Notes		: 
	// See also		: setYPosition,setPosition
	//-----------------------------------------------
	void setXPosition(float x );
	//-----------------------------------------------
	// Function		: setYPosition
	// Purpose		: To set position of rendered char
	// Parameters	: float y
	// Returns		: void
	// Notes		: 
	// See also		: setXPosition,setPosition
	//-----------------------------------------------
	void setYPosition(float y );
	//-----------------------------------------------
	// Function		: setChar
	// Purpose		: To set the default char used in children
	// Parameters	: char _char
	// Returns		: void
	// Notes		: 
	// See also		: Rat.h, SnakeHead, SnakeComponent
	//-----------------------------------------------
	void setChar( char _char );
	//-----------------------------------------------
	// Function		: getXPosition const
	// Purpose		: To get position of drawn char
	// Parameters	: 
	// Returns		: const float& m_position.x
	// Notes		: 
	// See also		: getYPosition,getPosition
	//-----------------------------------------------
	const float& getXPosition() const;
	//-----------------------------------------------
	// Function		: getYPosition const
	// Purpose		: To get position of drawn char
	// Parameters	: 
	// Returns		: const float& m_Position.y
	// Notes		: 
	// See also		: getXPosition,getPosition
	//-----------------------------------------------
	const float& getYPosition() const;
	//-----------------------------------------------
	// Function		: getPosition const
	// Purpose		: To get vector2 of the drawn char 
	// Parameters	: 
	// Returns		: const Vector2& m_position
	// Notes		: 
	// See also		: getYPosition,getPosition
	//-----------------------------------------------
	const Vector2& getPosition() const;
	//-----------------------------------------------
	// Function		: setPosition
	// Purpose		: To set vector2 of the drawn char 
	// Parameters	: Vector2 m_position
	// Returns		: 
	// Notes		: 
	// See also		: setYPosition,setXPosition
	void setPosition( Vector2 position );
	//-----------------------------------------------
	// Function		: getChar const
	// Purpose		: To get the set char 
	// Parameters	:
	// Returns		: const char& m_char
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	const char& getChar() const;
};


#endif // !CHAROBJECT_h

