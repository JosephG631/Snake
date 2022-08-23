#ifndef PLAYERDATA_H
#define PLAYERDATA_H
#include "Timer.h"
//-----------------------------------------------
// Class	: PlayerData
// Purpose	: used to track players data such as score 
// Usage	:	
//				PlayerData()
//				PlayerData( const int scoreIncrement, int displaySnakeLength, int timeBonusScore )
//				~PlayerData()
//				void increaseScore()
//				void setScore( int score )
//				void setDisplaySnakeLength( int length )
//				void render()
//				const int& getScore()const
//				const int& getHighScore()const
//				void calculateHighScore()
//				void startGameTimer()
//				float getTimePlayed()		    
// See also: 
//-----------------------------------------------
class PlayerData
{
private:
	int				m_score;				// player  game score 
	int				m_timeBonusScore;		// score gain for been faster
	int				m_highScore;			// user stored highscore 
	const int		m_scoreIncrement;		// the amount the score increases by when user eats
	int				m_displaySnakeLength;	// the length of the snake that can be displayed
	Timer			m_displayGameTimer;		// game time displayed
	Timer			m_bonusPointTimer;		// used to work out bonus points 
	float			m_lastRatCollectedTime; // stores the last time it took the user to eat 

public:
	//-----------------------------------------------
	// Function		: PlayerData
	// Purpose		: default constructor 
	// Parameters	:
	// Returns		: void
	// Notes		: 
	// See also		:
	//-----------------------------------------------
	PlayerData();
	//-----------------------------------------------
	// Function		: PlayerData
	// Purpose		: constructor with game settings passed int
	// Parameters	: const int scoreIncrement,int displaySnakeLength, int timeBonusScore
	// Returns		: void
	// Notes		: 
	// See also		: Game.h , Setting.h 
	//-----------------------------------------------
	PlayerData( const int scoreIncrement,int displaySnakeLength, int timeBonusScore );
	//-----------------------------------------------
	// Function		: ~PlayerData
	// Purpose		: decontructor 
	// Parameters	:
	// Returns		: void
	// Notes		: don't call
	// See also		: 
	//-----------------------------------------------
	~PlayerData();
	//-----------------------------------------------
	// Function		: increaseScore
	// Purpose		: used to increase score at a set increment 
	// Parameters	:
	// Returns		: void
	// Notes		: 
	// See also		: CollisionDectection.h
	//-----------------------------------------------
	void increaseScore();
	//-----------------------------------------------
	// Function		: setScore
	// Purpose		: used to change the value of score
	// Parameters	: int score
	// Returns		: void
	// Notes		: mainly used to rest score back to 0
	// See also		: increaseScore()
	//-----------------------------------------------
	void setScore( int score );
	//-----------------------------------------------
	// Function		: setDisplaySnakeLength
	// Purpose		: used to change the value of displayed snake length
	// Parameters	: int length
	// Returns		: void
	// Notes		:
	// See also		: 
	//-----------------------------------------------
	void setDisplaySnakeLength( int length );
	//-----------------------------------------------
	// Function		: render
	// Purpose		: used render the playerData to the player
	// Parameters	:
	// Returns		: void
	// Notes		: 
	// See also		: Game.render()
	//-----------------------------------------------
	void render();
	//-----------------------------------------------
	// Function		: getScore
	// Purpose		: used to get the current score  
	// Parameters	:
	// Returns		: const int& m_score
	// Notes		: mainly used for game over state
	// See also		: CollisionDectection.h
	//-----------------------------------------------
	const int& getScore()const;
	//-----------------------------------------------
	// Function		: getHighScore
	// Purpose		: used to get the current score  
	// Parameters	:
	// Returns		: const int& m_Highscore
	// Notes		: mainly used for game over state
	// See also		: game.update
	//-----------------------------------------------
	const int& getHighScore()const;
	//-----------------------------------------------
	// Function		: calculateHighScore
	// Purpose		: used to work out the users hs in current play session 
	// Parameters	:
	// Returns		:
	// Notes		: only works while the game is lanuched. does not save on close
	// See also		:
	//-----------------------------------------------
	void calculateHighScore();
	//-----------------------------------------------
	// Function		: startGameTimer
	// Purpose		: start the clock 
	// Parameters	:
	// Returns		:
	// Notes		: only works while the game is lanuched. does not save on close
	// See also		:
	//-----------------------------------------------
	void startGameTimer();
	//-----------------------------------------------
	// Function		: getTimePlayed
	// Purpose		: gets the time the player played
	// Parameters	:
	// Returns		: float m_displayGameTimer.getElapsedSeconds();
	// Notes		: only works while the game is lanuched. does not save on close
	// See also		:
	//-----------------------------------------------
	 float getTimePlayed();
};


#endif // !PLAYERDATA_H

