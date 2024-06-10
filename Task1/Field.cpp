#include "Field.h"

#include "Walker.h"
#include "Starting.h"
#include "Ending.h"

#include<iostream>

using namespace std;

void Field::draw(Walker Xp, Starting A, Ending B) {
	for (int y = 1; y <= field_y; ++y) {
		for (int x = 1; x <= field_x; ++x) {
			if (Xp.output_x() == x and Xp.output_y() == y) { 
				cout << "x"; continue; 
			}
			if (A.position_x() == x and A.position_y() == y) {
				cout << "A"; continue; 
			}
			if (B.position_x() == x and B.position_y() == y) { 
				cout << "B"; continue;
			}
			cout << "-";
		}
		cout << endl;
	}
}

