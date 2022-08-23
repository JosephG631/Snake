#ifndef SETTINGS_H
#define SETTINGS_H

#include "Directions.h"
#include "GameStates.h"
#include "Vector2.h"
//-----------------------------------------------
// Class	:	Settting
// Purpose	:	To store all the default values in one place so I can easily change them before run time
// Usage	:	Settings()
//				const int& getSnakeLength() const
//				const Vector2& getDefaultSnakeHeadPosition() const
//				const int& getScoreIncrease() const
//				const Vector2& getArenaBounds()const
//				const Directions& getDefaultDirection() const
//				const char& getArenaChar()const
//				const char& getHeadChar()const
//				const float& getSpeed() const
//				const int& getMaxSnakeLength() const
//				const int& getTopLeftCorner()const
//				const GameStates& getStartingState() const
//				const int& getBonusScore()const
//				const int& getSnakeColour()const
//				const int& getRatColour()const
//				const int& getArenaColour()const
//				const int& getOtherColour()const
//			
// See also	: Game.cpp
//-----------------------------------------------
class Settings
{ 
private:
	const int			m_snakeLength;					// starting snake length
	Vector2				m_defaultSnakeHeadPosition;		// starting snake position
	const int			m_scoreIncrease;				// amount you incremeant the score by
	Vector2				m_arenaBounds;					// the area of the arena 
	const Directions	m_defaultDirection;				// starting moving direction of the snake
	const char			m_arenaChar;					// the default char that makes up the arena 
	const char			m_headChar;						// the default head of the snake char 
	const char			m_snakeBodyChar;				// the default char that makes up the body of snake 
	const float			m_speed;						// the default moving speed of the snake 
	int					m_maxLength;					//	the maximum length the snake can be depenmding on the arena bounds
	const int			m_arenaTopLeftCorner;			// the point where the arena is drawn from 
	const GameStates	m_startingState;				// starting game state 
	const int			m_bonusScore;					// bonus score incremeant 
	const int			m_snakeColour;					// the snake starting colour 
	const int			m_ratColour;					// rat starting colour
	const int			m_arenaColour;					// arena border starting colour
	const int			m_otherColours;					// the rest of the game colours 
public:
	//-----------------------------------------------
	// Function		: Settings
	// Purpose		: default constructor 
	// Parameters	: 
	// Returns		: void
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	Settings();
	//-----------------------------------------------
	// Function		: getSnakeLength
	// Purpose		: to return the default snake length
	// Parameters	: 
	// Returns		: const int& m_snakeLength
	// Notes		: 
	// See also		: Snake.h , SnakeBody.h
	//----------------------------------------------
	const int& getSnakeLength() const;
	//-----------------------------------------------
	// Function		: getDeafaultSnakeHeadPosition
	// Purpose		: to return the starting pos of the snake
	// Parameters	: 
	// Returns		: const Vector2& m_snakeHeadPosition
	// Notes		: 
	// See also		:SnakeHead.h
	//----------------------------------------------
	const Vector2& getDefaultSnakeHeadPosition() const;
	//-----------------------------------------------
	// Function		: getScoreIncrease
	// Purpose		: to return the default score Incremeant
	// Parameters	: 
	// Returns		: const int& m_scoreIncrease
	// Notes		: 
	// See also		: playerData.h
	//----------------------------------------------
	const int& getScoreIncrease() const;
	//-----------------------------------------------
	// Function		: getArenaBounds
	// Purpose		: to return the default arena size 
	// Parameters	: 
	// Returns		: const Vector2& m_arenaBounds
	// Notes		: 
	// See also		: Arena.h
	//----------------------------------------------
	const Vector2& getArenaBounds()const;
	//-----------------------------------------------
	// Function		: getDefaultDirection
	// Purpose		: to return the starting direction of the snake
	// Parameters	: 
	// Returns		: const Directions& m_defaultDirection
	// Notes		: 
	// See also		: Directions.h, SnakeHead.h
	//----------------------------------------------
	const Directions& getDefaultDirection() const;
	//-----------------------------------------------
	// Function		:  getArenaChar
	// Purpose		: to return the character that makes up the arena
	// Parameters	: 
	// Returns		: const char& m_arenaChar
	// Notes		: 
	// See also		: arena.h
	//----------------------------------------------
	const char& getArenaChar()const;
	//-----------------------------------------------
	// Function		: getHeadChar
	// Purpose		: to return the snake head character
	// Parameters	: 
	// Returns		: const char& m_HeadChar
	// Notes		: 
	// See also		: SnakeHead.h
	//----------------------------------------------
	const char& getHeadChar()const;
	//-----------------------------------------------
	// Function		: getSnakeBodyChar
	// Purpose		: to ge the character that makes up the body of the snake
	// Parameters	: 
	// Returns		: const char& m_snakeBodyChar
	// Notes		: 
	// See also		: SnakeBody.h
	//----------------------------------------------
	const char& getSnakeBodyChar()const;
	//-----------------------------------------------
	// Function		: getSpeed
	// Purpose		: to get the default movement speed of the snake
	// Parameters	: 
	// Returns		: const float& m_speed
	// Notes		: 
	// See also		: SnakeHead.h
	//----------------------------------------------
	const float& getSpeed() const;
	//-----------------------------------------------
	// Function		: getMaxSnakeLength
	// Purpose		: return the max length the snake can be
	// Parameters	: 
	// Returns		: const int& m_maxSnakeLength
	// Notes		: 
	// See also		: SnakeBody.h
	//----------------------------------------------
	const int&  getMaxSnakeLength() const;
	//-----------------------------------------------
	// Function		: getTopLeftCorner
	// Purpose		: to returtn the drawing point of the arena 
	// Parameters	: 
	// Returns		: const int& m_topLeftCorner
	// Notes		: 
	// See also		: 
	//----------------------------------------------
	const int& getTopLeftCorner()const;
	//-----------------------------------------------
	// Function		: getStartingState
	// Purpose		: return the default starting state 
	// Parameters	: 
	// Returns		: const GameStates&  m_startingState
	// Notes		: 
	// See also		: GameStates.h ,Game.h
	//----------------------------------------------
	const GameStates& getStartingState() const;
	//-----------------------------------------------
	// Function		: getBonusScore
	// Purpose		: return the default bonusScoreAmount
	// Parameters	: 
	// Returns		: const int& m_bonus 
	// Notes		: 
	// See also		: GameStates.h ,Game.h
	//----------------------------------------------
	const int& getBonusScore()const;
	//-----------------------------------------------
	// Function		: getSnakeColour
	// Purpose		: return colour for snake
	// Parameters	: 
	// Returns		: const int& m_snakeColour
	// Notes		: 
	// See also		: game.render()
	//----------------------------------------------
	const int& getSnakeColour()const;
	//-----------------------------------------------
	// Function		: getRatColour
	// Purpose		: return colour of rat
	// Parameters	: 
	// Returns		: const int& m_ratColour
	// Notes		: 
	// See also		: game.render()
	//----------------------------------------------
	const int& getRatColour()const;
	//-----------------------------------------------
	// Function		: getArenaColour
	// Purpose		: return arena colour
	// Parameters	: 
	// Returns		: const int&m_arenaColour
	// Notes		: 
	// See also		: game.render()
	//----------------------------------------------
	const int& getArenaColour()const;
	//-----------------------------------------------
	// Function		: getOtherColour
	// Purpose		: return colour for the rest of the game
	// Parameters	: 
	// Returns		: const int&m_otherColour
	// Notes		: 
	// See also		: game.render()
	//----------------------------------------------
	const int& getOtherColour()const;
};
#endif // !SETTINGS_H

