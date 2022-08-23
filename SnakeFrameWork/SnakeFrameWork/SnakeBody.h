#ifndef SNAKEBODY_H
#define SNAKEBODY_h

#include "SnakeComponent.h"
#include "SnakeHead.h"
//-----------------------------------------------
// Class	: SnakeHead
// Purpose	: To manage a SnakeBody object.
// Usage	:	SnakeHead snakeBody;
//				void move( const SnakeHead& snakeHead)
//				SnakeBody()
//				SnakeBody( int snakeLength, char bodyChar, int maxLength )
//				void render() const
//				void unrender() const
//				void update( const SnakeHead& snakeHead, const int& snakeLength )
//				const Vector2& getSnakeComponentPosition( int i ) const			           
// See also	: Snake , SnakeComponent, CharObject
//-----------------------------------------------
class SnakeBody 
{
private:
	SnakeComponent* m_pSnakeComponent;	// pointer for an array of snake components that make up the body of the snake
	Vector2			m_lastPositionTemp; // storing a temporary position
	Vector2			m_lastPosition;		// storing the last positon 
	int				m_snakeLength;		// the lenght of the whole snake 
	//-----------------------------------------------
	// Function		: move
	// Purpose		: move the snakeComponents towards the position of the head. 
	// Parameters	: const SnakeHead& snakeHead
	// Returns		: void
	// Notes		:
	// See also		: Snake.h
	//-----------------------------------------------
	void move( const SnakeHead& snakeHead);
public:
	//-----------------------------------------------
	// Function		: SnakeBody
	// Purpose		: constructor
	// Parameters	: 
	// Returns		: void
	// Notes		: 
	// See also		: SnakeBody( int snakeLength, char bodyChar, int maxLength )
	//-----------------------------------------------
	SnakeBody();
	//-----------------------------------------------
	// Function		: SnakeBody
	// Purpose		: to use the default settings
	// Parameters	: ( int snakeLength, char bodyChar, int maxLength )
	// Returns		: void
	// Notes		: 
	// See also		: settings.h
	//-----------------------------------------------
	SnakeBody( int snakeLength, char bodyChar, int maxLength );
	//-----------------------------------------------
	// Function		: ~Snake
	// Purpose		: decontructor
	// Parameters	: none
	// Returns		: void
	// Notes		: Don't call
	// See also		:
	//-----------------------------------------------
	~SnakeBody();
	//-----------------------------------------------
	// Function		: render
	// Purpose		: render all snake elements. 
	// Parameters	: 
	// Returns		: void
	// Notes		: I don't use CharObjects render as I need to render a array
	// See also		: SnakeComponent.h
	//-----------------------------------------------
	void render() const;
	//-----------------------------------------------
	// Function		: unrender
	// Purpose		: unrender all snake elements. 
	// Parameters	: 
	// Returns		: void
	// Notes		: 
	// See also		: SnakeComponent.h
	//-----------------------------------------------
	void unrender() const;
	//-----------------------------------------------
	// Function		: update
	// Purpose		: updating the other snake classes  
	// Parameters	: Direction& direction
	// Returns		: void
	// Notes		: 
	// See also		: SnakeBody.update, SnakeHead.update 
	//-----------------------------------------------
	void update( const SnakeHead& snakeHead, const int& snakeLength );
	//-----------------------------------------------
	// Function		: getSnakeComponentPosition( int i )
	// Purpose		: used to get any of the snake component positions
	// Parameters	: int i
	// Returns		: const Vector2& m_pSnakeComponent[i].getPosition();
	// Notes		:
	// See also		: Snake.h
	//-----------------------------------------------
	const Vector2& getSnakeComponentPosition( int i ) const;
};


#endif //! SNAKEBODY
