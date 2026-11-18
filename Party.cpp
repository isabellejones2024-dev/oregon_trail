//This file handles the party class, contains party members and their accumulation of injuries, based on overall player health

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Party {
public:
	//party member is a string containing the name of the party member
	string member;
	// injury_time is an int represening how long the injuries a party member has suffered will last
	int injury_time;
	// injury_severity is an int representing how likly a aprty members injuries are to kill them
	int injury_severity;

	// health_status is an int from the player class, assumed that a smaller int equates to a lower represetned heatlh
	void health_event_change(int health_status) {
		int event = rand() % health_status;
		switch (event) {
		case 9:
			cout << member << " has caught a cold" << endl;
			injury_time = injury_time + 2;
			injury_severity = injury_severity + 1;
			break;
		case 8:
			cout << member << " has contracted dysentary" << endl;
			injury_time = injury_time + 4;
			injury_severity = injury_severity + 2;
			break;
		case 7:
			cout << member << " has broke an arm" << endl;
			injury_time = injury_time + 5;
			injury_severity = injury_severity + 2;
			break;
		case 6:
			cout << member << " has broke a leg" << endl;
			injury_time = injury_time + 5;
			injury_severity = injury_severity + 2;
			break;
		case 5:
			cout << member << " has contracted syphyllis" << endl;
			injury_time = injury_time + 7;
			injury_severity = injury_severity + 3;
			break;
		case 4:
			cout << member << " has suffered a large cut" << endl;
			injury_time = injury_time + 4;
			injury_severity = injury_severity + 2;
			break;
		}

	}

	bool death_event() {
		int death_chance = 0;
		if (injury_severity > 1) {
			//randomized death chance dependent on injury_severity
			death_chance = rand() % (100 - 10 * (injury_severity - 1));
		}
		else {
			//setting death chance at fixed number, ensuring death won't happen
			int death_chance = 100;
		}
		if (death_chance == 1) {
			//returning the party member has died
			return 1;
		}
		else {
			injury_time = injury_time - 1;
			if (injury_time == 0) {
				injury_severity = 0;
			}
			else if (injury_time < (injury_severity * 3) - 1) {
				if (injury_severity > 1) {
					injury_severity = injury_severity - 1;
				}
			}
			//returning the party member has survived
			return 0;
		}
	}

};



