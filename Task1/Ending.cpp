#include "Ending.h"

#include "Walker.h"
#include "Starting.h"
#include "Ending.h"


bool Ending::touching(const int walk_x, const int walk_y) {
	if (walk_x == position.x and walk_y == position.y) {
		return true;
	}
	else {
		return false;
	}
}