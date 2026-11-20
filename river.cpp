#include <string>
#include <unordered_map>
#include <iostream>
#include "river.h"
#include "user_input.h"

using namespace std;

RiverEvent::RiverEvent() {
	name = "bob";
	depth = (rand() % 5) + (rand() % 100) / 100;
	width = (rand() % 12) + (rand() % 100) / 100;
	amt_of_loss = 15;
	chance_of_loss = 5;
}

string RiverEvent::introRiver() {
	return "You come across a river";
}

void RiverEvent::howToCross(Player& plr) {
	cout << "How would you like to cross the river?" << endl;
	cout << "\t0: Ford the river." << endl;
	cout << "\t1: Float the wagon." << endl;
	cout << "\t2: Take a ferry." << endl;
	cout << "\t3: Cross a bridge." << endl;
}


void RiverEvent::crossRiver(Player& plr) {
	vector<vector<float>> amount_lost_tiers = { {-1,1.5,3,4}, {0,20,20,25} };
	vector<vector<float>> chance_lost_tiers = { {-1,2,5,8,10}, {0,5,15,25,25} };


	for (int i = 0; i < amount_lost_tiers[0].size(); i++) {
		if (depth > amount_lost_tiers[0][i]) {
			amt_of_loss += amount_lost_tiers[1][i];
		}
	}

	for (int i = 0; i < chance_lost_tiers[0].size(); i++) {
		if (width > chance_lost_tiers[0][i]) {
			chance_of_loss += chance_lost_tiers[1][i];
		}
	}


	int d_roll = rand() % 100;
	float new_val;
	cout << "Chance:" << 100-chance_of_loss << " Amount:" << amt_of_loss << " Roll:" << d_roll << endl;

	if (d_roll > (100 - chance_of_loss)) {
		for (auto i = plr.inventory.begin(); i != plr.inventory.end(); i++) {
			new_val = i->second * (amt_of_loss / 100);
			plr.inventory[i->first] = (int)new_val;
		}
	}
}







ostream& operator<<(ostream& os, Player& plr) {
	for (auto i = plr.inventory.begin(); i != plr.inventory.end(); i++) {
		os << i->first << ": " << i->second << endl;
	}
	return os;
}