#include "Settings.h"

//default values 
Settings::Settings()
	: m_snakeLength			( 5 )
	, m_scoreIncrease		( 5 )
	, m_arenaChar			( '-' )
	, m_speed				( 20.00f )
	, m_snakeBodyChar		( '=' )
	, m_headChar			( '>' )
	,m_maxLength			( 1500 )
	,m_defaultDirection		( Directions::Right )
	, m_arenaTopLeftCorner	( 0 ) 
	,m_startingState		( GameStates::MainMenu )
	,m_bonusScore			( 3 )
	,m_snakeColour			( 32 )	// green
	,m_ratColour			( 4 )	// red
	,m_arenaColour			( 50 )	// blue
	,m_otherColours			( 1 )	// darkBlue
{
	//setting vectors default values
	m_arenaBounds.x = 50.00f;
	m_arenaBounds.y = 30.00f;
	m_defaultSnakeHeadPosition.x = 5.00f;
	m_defaultSnakeHeadPosition.y = 5.00f;
	//work out the max length the snake can be
	m_maxLength = static_cast <int>(m_arenaBounds.x * m_arenaBounds.y);
}
//getters for every var in the class 
const int& Settings::getSnakeLength() const
{
	return m_snakeLength;
}

const Vector2& Settings::getDefaultSnakeHeadPosition() const
{
	return m_defaultSnakeHeadPosition;
}

const int& Settings::getScoreIncrease() const
{
	return m_scoreIncrease;
}

const Vector2& Settings::getArenaBounds() const
{
	return m_arenaBounds;
}

const Directions& Settings::getDefaultDirection() const
{
	return m_defaultDirection;
}

const char& Settings::getArenaChar() const
{
	return m_arenaChar;
}

const char& Settings::getHeadChar() const
{
	return m_headChar;
}

const char& Settings::getSnakeBodyChar() const
{
	return m_snakeBodyChar;
}

const float& Settings::getSpeed() const
{
	return m_speed;
}

const int& Settings::getMaxSnakeLength() const
{
	return m_maxLength;
}

const int& Settings::getTopLeftCorner() const
{
	return m_arenaTopLeftCorner;
}

const GameStates& Settings::getStartingState() const
{
	return m_startingState;
}

const int& Settings::getBonusScore() const
{
	return m_bonusScore;
}

const int& Settings::getSnakeColour() const
{
	return m_snakeColour;
}

const int& Settings::getRatColour() const
{
	return m_ratColour;
}

const int& Settings::getArenaColour() const
{
	return m_arenaColour;
}

const int& Settings::getOtherColour() const
{
	return m_otherColours;
}
