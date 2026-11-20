#ifndef _OT_RIVEREVENT_
#define _OT_RIVEREVENT_
#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

class Player {
public:
	unordered_map<string, int> inventory;
	friend ostream& operator<<(ostream&, Player&);
};

class RiverEvent {
public:
	string name;
	float depth;
	float width;
	float chance_of_loss;
	float amt_of_loss;

	RiverEvent();

	string introRiver();

	void howToCross(Player&);

	void crossRiver(Player&);

	
};

#endif