#ifndef TIMER_H
#define TIMER_H

#include <chrono>

//-----------------------------------------------
// Class	: Time.h
// Purpose	: used create a timer. 
// Usage	:	
//			void start()
//			void getELapsedSeconds();
//				
//              
// See also	: 
//-----------------------------------------------
typedef std::chrono::high_resolution_clock Clock;
typedef std::chrono::high_resolution_clock::time_point TimePoint;

class Timer
{
private:
	Clock		m_clock;	// The high-resolution clock
	TimePoint	m_startTime;

public:
	Timer();
	//-----------------------------------------------
	// Function		: start()
	// Purpose		: used to start a timer
	// Parameters	:
	// Returns		: void
	// Notes		: 
	// See also		:
	//-----------------------------------------------
	void start();	// For starting the Timer
	//-----------------------------------------------
	// Function		: getElapsedSeconds
	// Purpose		: used get the current time since start was called
	// Parameters	:
	// Returns		: float elapsed seconds
	// Notes		: 
	// See also		:
	//-----------------------------------------------
	float getElapsedSeconds(); 
};
#endif //!TIMER_H
