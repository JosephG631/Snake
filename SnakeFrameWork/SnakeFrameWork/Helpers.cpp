#include <iostream>
#include <Windows.h>
#include <string>

#include "Helpers.h"
namespace Rendering
{
	void gotoXY( int x, int y )
	{
		HANDLE hStdout = GetStdHandle( STD_OUTPUT_HANDLE );
		COORD position = { (SHORT)x, (SHORT)y };

		SetConsoleCursorPosition( hStdout, position );
	}
	void drawChar( char c, int x, int y )
	{
		gotoXY( x, y );

		std::cout << c;
	}
	void drawString( std::string c, int x, int y )
	{
		// draing a string at the paramaters positions 
		gotoXY( x, y );

		std::cout << c;
	}
}

namespace Math
{
	bool floatsEqual( float a, float b, float tolerance )
	{
		// used to check if 2 float values are close to the same within a tolerance 
		return abs( a - b ) <= tolerance;
	}
}