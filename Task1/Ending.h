#pragma once
#include"Point.h"
#include"Walker.h"

class Ending
{
private:
	Point position;
public:
	Ending(int _x, int _y) {
		position.x = _x;
		position.y = _y;
	};
	int position_x() { return position.x; };
	int position_y() { return position.y; };
	bool touching(const int walk_x, const int walk_y);
};

