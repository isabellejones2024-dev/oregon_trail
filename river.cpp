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
	vector<vector<float>> amount_lost_tiers = { {-1,1.5,3,4}, {15,35,55,75} };
	vector<vector<float>> chance_lost_tiers = { {-1,2,5,8,10}, {5,20,35,60,85} };


	for (int i = 0; i < amount_lost_tiers[0].size(); i++) {
		if (depth > amount_lost_tiers[0][i]) {
			amt_of_loss = amount_lost_tiers[1][i];
		}
	}

	for (int i = 0; i < chance_lost_tiers[0].size(); i++) {
		if (width > chance_lost_tiers[0][i]) {
			chance_of_loss = chance_lost_tiers[1][i];
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