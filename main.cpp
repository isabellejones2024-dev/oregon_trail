#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Ailment {
	string name;
	int lethality; //higher lethality means higher likelihood of dying because of
	int speed_reduction; //e.g. broken legs may be more debilitating to the party's speed
	int time_until_cured; 
};

vector<Ailment> poss_ailments;


class Character {
public:
	string name = "";
	const int base_speed = 100;
	const int base_death_chance = 1; //out of 10,000, so 1 means 0.01% chance. you're never safe from not dying.
	const int base_hunger = 50; //temporary addition, used as a baseline if we want randomized hunger uses.

	void rollForAilment() {
		//code to pick a random ailment from the poss_ailments vector
	}

	void decrementAilmentsCureTimer() {
		//code to iterate through the ailments vector and decrement each ailments timer, removing it if 0.
	}


private:
	vector<string> curr_ailments = {};
};



int main() {
	std::cout << "Hello World!";
	return 0;
}