#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "river.h"

using namespace std;

class Party {
public:
	string main_character_name = "";
	bool able_to_die = false;


	//Maybe in party, maybe not?
	int yoke = 0;
	int clothing = 0;
	int ammo = 0;
	int amt_of_food = 0;
	int party_condition = 4;
	int balance = 0;
	int speed; //how far can the party progress
	int game_seed;



	//vector<Characters> party_members = {};


private:
	/*
	void decideIfNewIllness() {
		ran_num = randomInteger(1,3);
		party_members[ran_num].rollNewIllness(condition);
		
	}
	*/
	
	void progressTurn() {

		int food_loss = rand() % 100;
		
	}


	


};



int main() {
	std::cout << "Hello World!";
	srand(time(0));
	std::cout << "\n" << rand() % 500;
	std::cout << "\n" << rand() % 500;
	std::cout << "\n" << rand() % 500 << endl;

	Player abc;
	abc.inventory = { {"food", 500},{"oxen", 10},
					{"clothing", 500},{"bullets", 500},
					{"wheels", 50},{"axels", 1000},{"tongues", 3} };
	RiverEvent riv;

	riv.crossRiver(abc);

	cout << abc;

	return 0;
}