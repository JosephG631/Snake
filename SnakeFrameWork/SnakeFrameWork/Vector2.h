#ifndef VECTOR2_h
#define VECTOR2_h

#include"Helpers.h"
//-----------------------------------------------
// Class	: Vector2
// Purpose	: To make a vector 2 & use as a position for game objects
// Usage	:	
// See also	:
//-----------------------------------------------
class  Vector2
{
private:
public:
	float x; // x position
	float y; // y position 
	//-----------------------------------------------
	// Function		: Vector2
	// Purpose		: Vector2 constructor 
	// Parameters	: none
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	Vector2();
	//-----------------------------------------------
	// Function		: ~Vector2
	// Purpose		: Vector2 deconstructor 
	// Parameters	: none
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------

	~Vector2();
	////-----------------------------------------------
	//// operator		: +
	//// Purpose		: To add two vectors togther
	//// Parameters		: const Vector2& other
	//// Returns		: rtnVal
	////-----------------------------------------------
	Vector2 operator+( const Vector2& other )
	{
		Vector2 rtnVal;
		rtnVal.x = x + other.x;
		rtnVal.y = y + other.y;
		return rtnVal;
	}
	////-----------------------------------------------
	//// operator		: -
	//// Purpose		: To minus two vectors 
	//// Parameters		: const Vector2& other
	//// Returns		: rtnVal
	////-----------------------------------------------
	Vector2 operator-( const Vector2& other )
	{
		Vector2 rtnVal;
		rtnVal.x = x - other.x;
		rtnVal.y = y - other.y;
		return rtnVal;
	}
	////-----------------------------------------------
	//// operator		: ==
	//// Purpose		: To comapre  a vector by another vector
	//// Parameters		: const Vector2& other
	//// Returns		: true/false
	////-----------------------------------------------
	bool operator==(const  Vector2& other ) const
	{
		return Math::floatsEqual(x , other.x  ) && Math::floatsEqual( y, other.y );
		
	}
	////-----------------------------------------------
	//// operator		: !=
	//// Purpose		: To comapre  a vector by another vector and see if the don't equal
	//// Parameters		: const Vector2& other
	//// Returns		: true/false
	////-----------------------------------------------
	bool operator !=( const Vector2& other )
	{
		return( x != other.x && y != other.y );
	}
};
#endif

