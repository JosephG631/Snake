#ifndef RAT_H
#define RAT_H


#include "Arena.h"
#include "Snake.h"
#include "Vector2.h"
//-----------------------------------------------
// Class	: Rat
// Purpose	: used as a pickup for the snake to increase size
// Usage	:	
//			 void spawnRat( Arena& arena ,Snake& snake)
//			 Rat()
//			 ~Rat()	
//              
// See also	: CharObject.h
//-----------------------------------------------
class Rat : public CharObject
{
private:
	Vector2		m_randomPosition; // stores a random position
public:
	Rat();
	~Rat();
	//-----------------------------------------------
	// Function		: spawnRat
	// Purpose		: gain a random position from arena and check it does not spawn inside the snake
	// Parameters	: Arena& arena, Snake& snake
	// Returns		: void
	// Notes		: 
	// See also		: Arena.h,Snake.h
	//-----------------------------------------------
	void spawnRat( Arena& arena ,Snake& snake);
	
};
#endif // !RAT_h
