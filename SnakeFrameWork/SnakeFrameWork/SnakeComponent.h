#ifndef SNAKECOMPONET_h
#define SNAKECOMPONET_h

#include "CharObject.h"
//-----------------------------------------------
// Class	: SnakeComponent
// Purpose	: To manage a SnakeBody object.
// Usage	:	SnakeComponent snakeComponent;
//				SnakeComponent();
//				~SnakeComponent();
// Note:  This class may hold no information but is used so I can use a different name than the parent              
// See also	: SnakeHead.h, CharObject.h,SnakeBody.h
//-----------------------------------------------
class SnakeComponent :public CharObject
{
public:
	SnakeComponent();
	~SnakeComponent();


private:

};


#endif // !SNAKECOMPONET_h

