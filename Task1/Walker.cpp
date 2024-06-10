#include "Walker.h"
#include "Ending.h"

void Walker::moving(Ending end) {
	if (end.position_x() > position.x) {
		++position.x;
		return;
	}
	if (end.position_x() < position.x) {
		--position.x;
		return;
	}
	if (end.position_y() > position.y) {
		++position.y;
		return;
	}
	if (end.position_y() < position.y) {
		--position.y;
		return;
	}
}