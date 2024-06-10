#pragma once

#include "Walker.h"
#include "Starting.h"
#include "Ending.h"

/*x:40, y:20*/

class Field
{
private:
	const int field_x = 40;
	const int field_y = 20;
public:
	void draw(Walker Xp, Starting A, Ending B);
};

