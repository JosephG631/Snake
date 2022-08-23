#ifndef ARENA_H
#define ARENA_H

#include"Vector2.h"
//-----------------------------------------------
// Class	:	Arena
// Purpose	:	To create a play arena for the snake to stay inside 
// Usage	:	Arena arena
//				Arena();
//				Arena( Vector2 arenaBounds, char border, int topLeftCorner )
//				~Arena();
//				void render()
//				Vector2 randomPosition();
//				const float& getHeight() const
//				const float& getWidth() const
//				void setHeight(float y)
//				void setWidth( float x )
//				void unrender()
//				const int& getTopLeftCorner() const
// See also	: CollisionDectction.h
//-----------------------------------------------
class Arena
{
private:
	Vector2				m_size;				// The bounds of the arena
	char				m_border;			// The char that makes up the arena
	const int			m_topLeftCorner;	// drawing point
	Vector2				m_randomPosition;	// stores a random position within the bounds
public:
	//-----------------------------------------------
	// Function		: Arena
	// Purpose		: default constructor 
	// Parameters	: 
	// Returns		: 
	// Notes		: use other constructor for more flexibility
	// See also		: Arena( Vector2 arenaBounds,char border, int topLeftCorner )
	//-----------------------------------------------
	Arena();
	//-----------------------------------------------
	// Function		: Arena
	// Purpose		: Constructor with a paramater 
	// Parameters	: Vector2 arenaBounds,char border, int topLeftCorner
	// Returns		:
	// Notes		: Used to pass in the default settings.
	// See also		: Settings.h
	//-----------------------------------------------
	Arena( Vector2 arenaBounds,char border, int topLeftCorner );
	//-----------------------------------------------
	// Function		: ~Arena
	// Purpose		: To decontruct this class
	// Parameters	: 
	// Returns		: 
	// Notes		: do not call.
	// See also		: 
	//-----------------------------------------------
	~Arena();
	//-----------------------------------------------
	// Function		: randomPosition
	// Purpose		: To pick a random vector2 within the arena bounds
	// Parameters	: 
	// Returns		: Vector2 m_randomPositon
	// Notes		: not a const as it changes data
	// See also		: Rat.h
	//-----------------------------------------------
	Vector2 randomPosition();
	//-----------------------------------------------
	// Function		: getHeight
	// Purpose		: Get arena height
	// Parameters	: None
	// Returns		: const& float m_height
	// Notes		:
	// See also		: setHeight()
	//-----------------------------------------------
	const float& getHeight() const;
	//-----------------------------------------------
	// Function		: getWidth
	// Purpose		: Get arena width
	// Parameters	: None
	// Returns		: const float& m_width
	// Notes		:
	// See also		: setWidth()
	//-----------------------------------------------
	const float& getWidth() const;
	//-----------------------------------------------
	// Function		: setHeight
	// Purpose		: set arena height
	// Parameters	: float y
	// Returns		: void
	// Notes		:
	// See also		: getHeight()
	//-----------------------------------------------
	void setHeight(float y);
	//-----------------------------------------------
	// Function		: setWidth
	// Purpose		: set arena width
	// Parameters	: float x
	// Returns		: void
	// Notes		:
	// See also		: getWidth()
	//-----------------------------------------------
	void setWidth(float x);
	//-----------------------------------------------
	// Function		: render
	// Purpose		: render arena bounds
	// Parameters	: none
	// Returns		: void
	// Notes		:
	// See also		: Game.render()
	//-----------------------------------------------
	void render( );
	//-----------------------------------------------
	// Function		: unrender
	// Purpose		: unrender arena bounds
	// Parameters	: none
	// Returns		: void
	// Notes		:
	// See also		: render(), game.unrender()
	//-----------------------------------------------
	void unrender();
	//-----------------------------------------------
	// Function		: getTopLeftCorner
	// Purpose		: return topLeft var
	// Parameters	: none
	// Returns		: const int& m_topLeftCorner
	// Notes		:
	// See also		: 
	//-----------------------------------------------
	const int& getTopLeftCorner() const;
};


#endif // !ARENA_H
