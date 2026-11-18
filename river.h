#ifndef _OREGONTRAIL_
#define _OREGONTRAIL_
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

	RiverEvent();

	string introRiver();

	void crossRiver(Player&);

	
};

#endif