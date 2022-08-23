#ifndef HELPERS_H
#define HELPERS_H
#include <string>

//-----------------------------------------------
// Header  : Helpers
// Purpose : useful global functions
// See also: Game.h
//-----------------------------------------------
//-----------------------------------------------
// namespace	: Rendering
// Purpose		: different render functions 
// Usage		:
//					void gotoXY( int x, int y )
//					void drawChar( char c, int x, int y )
//					void drawString( std::string c, int x, int y )
// See also	: Game.rendering 
//-----------------------------------------------
namespace Rendering
{
	//-----------------------------------------------
	// Function		: gotoXY
	// Purpose		: To draw to the screen at a position
	// Parameters	: int x, int y
	// Returns		: 
	// Notes		: uses C
	// See also		: 
	//-----------------------------------------------
	void gotoXY( int x, int y );
	//-----------------------------------------------
	// Function		: drawChar
	// Purpose		: To render a single character at a position
	// Parameters	: char c, int x, int y,
	// Returns		: 
	// Notes		: 
	// See also		: gotoXY, drawString
	//-----------------------------------------------
	void drawChar( char c, int x, int y );
	//-----------------------------------------------
	// Function		: drawString
	// Purpose		: To render a  string of text to a position
	// Parameters	: std::string c, int x, int y,
	// Returns		: 
	// Notes		: 
	// See also		: gotoXY, drawChar
	//-----------------------------------------------
	void drawString( std::string c, int x, int y );
}
//-----------------------------------------------
// namespace	: Math
// Purpose		: useful math functions
// Usage		:
//				 bool floatsEqual( float a, float b, float tolerance = 0.5f )
// See also	: Vector2.H
//-----------------------------------------------
namespace Math
{
	bool floatsEqual( float a, float b, float tolerance = 0.5f );
	
}
#endif // !HELPERS_h

