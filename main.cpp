#include <iostream>
#include <string>
#include <vector>


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


	//vector<Characters> party_members = {};


private:
	/*
	void decideIfNewIllness() {
		ran_num = randomInteger(1,3);
		party_members[ran_num].rollNewIllness(condition);
		
	}

	
	void progressTurn() {
		for {
			Character.iterateTurn();
		}	
	}



	*/
	


};



int main() {
	std::cout << "Hello World!";
	return 0;
}