#pragma once
#include"Point.h"

#include "Walker.h"
#include "Starting.h"
class Ending; //this line works BUT if i use '#include "Ending.h"' it gives me an Error 'sytax error: identifier 'Ending' on line 24'. Why is it like this and why does 'class Ending;' work? idk


class Walker
{
private:
	Point position;
public:
	Walker(int _x, int _y) {
		position.x = _x;
		position.y = _y;
	};
	int input_x(int x) { position.x = x; };
	int input_y(int y) { position.y = y; };
	int output_x() { return position.x; };
	int output_y() { return position.y; };

	void moving(Ending end);
};