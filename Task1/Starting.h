#pragma once
#include"Point.h"

class Starting
{
private:
	Point position;
public:
	Starting(int _x, int _y) {
		position.x = _x;
		position.y = _y;
	};
	int position_x() { return position.x; };
	int position_y() { return position.y; };
};

