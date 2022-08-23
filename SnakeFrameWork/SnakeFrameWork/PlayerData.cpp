#include <string>
#include <sstream>

#include "Helpers.h"
#include "PlayerData.h"
PlayerData::PlayerData()
	: m_score				( 0 )
	, m_highScore			( 0 )
	, m_scoreIncrement		( 5 )
	, m_displaySnakeLength	( 5 )
	, m_timeBonusScore		( 2 )
	, m_lastRatCollectedTime( 0 )
{

}

PlayerData::PlayerData( int scoreIncrement, int displaySnakeLength, int timeBonusScore )
	: m_scoreIncrement	(scoreIncrement)
	, m_score				( 0 )
	, m_highScore			( 0 )
	, m_displaySnakeLength	( displaySnakeLength )
	,m_timeBonusScore		( timeBonusScore )
	,m_lastRatCollectedTime	( 0 )
{

}

PlayerData::~PlayerData()
{
}

void PlayerData::increaseScore()
{
	// calculate to add a bonus
	// if the player gets the next rat faster than they got the last one they get bons points
	if ( m_bonusPointTimer.getElapsedSeconds() <= m_lastRatCollectedTime )
	{
		// add bonus
		m_score += m_scoreIncrement + m_timeBonusScore;
	}
	else
	{
		// normal score increase 
		m_score += m_scoreIncrement;
	}
	// set last time
	m_lastRatCollectedTime = m_bonusPointTimer.getElapsedSeconds();

	// reset timer 
	m_bonusPointTimer.start();
}
void PlayerData::render()
{
	// displays current score 
	Rendering::drawString( "Score: " + std::to_string(m_score), 60, 10 );

	// displays the last highscore(does not update live)
	Rendering::drawString( "HighScore: " + std::to_string( m_highScore ), 60, 11 );

	// displaying the total length of the snake
	Rendering::drawString( "SnakeLength: " + std::to_string( m_displaySnakeLength ), 60, 12 );

	// displaying the current played time
	Rendering::drawString( "Time: " + std::to_string(m_displayGameTimer.getElapsedSeconds()) , 60, 14 );

	// bonus text
	Rendering::drawString( "get extra points if you eat a quicker than you last did" , 59, 15);
}

void PlayerData::calculateHighScore()
{
	if ( m_score > m_highScore )
	{
		// update highscore
		m_highScore = m_score;
	}
}

void PlayerData::startGameTimer()
{
	// start game timer 
	m_displayGameTimer.start();
}
// getter & setter 
void PlayerData::setScore( int score )
{
	m_score = score;
}

void PlayerData::setDisplaySnakeLength( int length )
{
	m_displaySnakeLength = length;
}

const int& PlayerData::getScore() const
{
	return m_score;
}

const int& PlayerData::getHighScore() const
{
	return m_highScore;
}



 float PlayerData::getTimePlayed() 
{
	return m_displayGameTimer.getElapsedSeconds();
}

