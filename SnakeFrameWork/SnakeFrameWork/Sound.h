#ifndef SOUND_H
#define SOUND_H

//-----------------------------------------------
// Class	:	Sound
// Purpose	:	To manage game sound 
// Usage	:	Sound sound
//				Sound();
//				~Sound();
//				void playEatFoodSound();
//				void playDieSound();
// See also	: SnakeHead & SnakeBody for memembers
//-----------------------------------------------
class Sound
{
private:
public:
	//-----------------------------------------------
	// Function		: Sound
	// Purpose		: sound constructor 
	// Parameters	: none
	// Returns		: void
	// Notes		: 
	// See also		: 
	//-----------------------------------------------
	Sound();
	//-----------------------------------------------
	// Function		: Sound
	// Purpose		: sound deconstructor 
	// Parameters	: none
	// Returns		: void
	// Notes		: Don't call
	// See also		: 
	//-----------------------------------------------
	~Sound();
	//-----------------------------------------------
	// Function		: playEatFoodSound
	// Purpose		: play a sound when snake eats food
	// Parameters	: none
	// Returns		: void
	// Notes		:
	// See also		: playDieSound
	//-----------------------------------------------
	void playEatFoodSound();
	//-----------------------------------------------
	// Function		: playDieSound
	// Purpose		: play a sound when snake dies
	// Parameters	: none
	// Returns		: void
	// Notes		:
	// See also		: 
	//-----------------------------------------------
	void playDieSound();
	
};
#endif // !SOUND_H


