//File for World class, defines the current state of the world
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class World {
public:
	int month = 1;
	int day = 1;
	//weather is an int representing current weather conditions (will set what weather type each int represents later)
	int weather = 1;
	//total_distance is an int represetning total distance from the end
	int total_distance = 300000;
	//next_milestone is an int that represents distance to the next_milestone
	int next_milestone = 1000;
	//creates a random seed on world creation. Must still use srand(world.seed) in main to set the actual seed
	int seed = time(0);

	// funciton that handles a day passing, also sets month as appropiate
	void day_passed(int& food, int rationing, int& health_status) {
		food = food - 50 * rationing;
		//removes some health if rationing is poor, none if its medium, and adds health if rationing is above average
		health_status = health_status - (2 - rationing);
		//sets health to 10 if health gets too low, to ensure it doesn't go negative(and to help the function of heatlh events in Party.cpp)
		if (health_status < 10) {
			health_status = 10;
		}
		day += 1;
		//handling month changes
		if (day > 28 && month == 2) {
			month += 1;
			day = 1;
		} 
		else if (day > 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8|| month == 10) ) {
			month += 1;
			day = 1;
		}
		else if (day > 31 && month == 12) {
			month = 1;
			day = 1;
		}
		else if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
			month += 1;
			day = 1;
		}
	}

	bool trail_movement(int& health_status, int pace, int oxen) {
		// miles able to be traveled
		int distance_traveled = (100 * pace) - (100 - health_status) + (10 * (oxen - 6));
		health_status = health_status - 1 * pace;
		if (distance_traveled > next_milestone) {
			total_distance -= next_milestone;
			next_milestone = 1000;
			//returning that next milestone has been reached
			return 1;
		}
		else {
			total_distance -= distance_traveled;
			next_milestone -= distance_traveled;
			//returning milestone has still not been reached
			return 0;
		}
	}

};