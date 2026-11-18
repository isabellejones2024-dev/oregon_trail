#include <string>
#include <unordered_map>
#include <iostream>
#include "river.h"

using namespace std;

RiverEvent::RiverEvent() {
	name = "bob";
	depth = (rand() % 5) + (rand() % 100) / 100;
	width = (rand() % 12) + (rand() % 100) / 100;
}

string RiverEvent::introRiver() {
	return "You come across a river";
}

void RiverEvent::crossRiver(Player& plr) {
	float chance_of_loss = 0;
	float amt_of_loss = 0;

	if (depth < 1.5) {
		amt_of_loss = 75;
	}
	else if (depth < 3) {
		amt_of_loss = 30;
	}
	else if (depth < 4) {
		amt_of_loss = 70;
	}

	if (width < 2) {
		chance_of_loss = 10;
	}
	else if (width < 5) {
		chance_of_loss = 25;
	}
	else if (width < 8) {
		chance_of_loss = 40;
	}
	else if (width < 10) {
		chance_of_loss = 55;
	}
	else {
		chance_of_loss = 70;
	}

	int d_roll = rand() % 100;
	//cout << "Chance:" << chance_of_loss << " Amount:" << amt_of_loss << " Roll:" << d_roll << endl;

	if (d_roll > (100 - chance_of_loss)) {
		for (auto i = plr.inventory.begin(); i != plr.inventory.end(); i++) {
			plr.inventory[i->first] = (int)(i->second * (amt_of_loss / 100));
		}
	}
}
ostream& operator<<(ostream& os, Player& plr) {
	for (auto i = plr.inventory.begin(); i != plr.inventory.end(); i++) {
		os << i->first << ": " << i->second << endl;
	}
	return os;
}