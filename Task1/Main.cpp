#include<iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

#include"Field.h"

#include "Walker.h"
#include "Starting.h"
#include "Ending.h"

using namespace std;

int main() {

	Field table;

	int x;
	int y;

	cout << "A - x: ";
	cin >> x;
	cout << "A - y: ";
	cin >> y;
	Starting Start(x,y);
	cout << "B - x: ";
	cin >> x;
	cout << "B - y: ";
	cin >> y;
	Ending Ending(x,y);

	Walker Player(Start.position_x(), Start.position_y());

	do {
		system("cls");

		Player.moving(Ending);

		table.draw(Player, Start, Ending);

		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	} while (!Ending.touching(Player.output_x(), Player.output_y()));

}