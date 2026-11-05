#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> poss_illnesses = { "dysentary", "cholera", "broken arm", "broken leg"};

class ailment {
	string name;
	int lethality; // higher lethality means higher likelihood of dying because of
	int speed_reduction; //e.x. broken legs may be more debilitating to the party's speed
	int time_until_cured; 
};


class character {
public:
	string name = "";

private:
	vector<string> curr_ailments = {};
};



int main() {
	std::cout << "Hello World!";
	return 0;
}