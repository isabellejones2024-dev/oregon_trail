#include <iostream>
#include <string>
#include <vector>

using namespace std;



string safeUserInputStr() {
	string text;
	cin >> text;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		text = "";
	}

	return text;
}

int safeUserInputInt() {
	int text;
	cin >> text;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		text = 0;
	}

	return text;
}

int safeUserInput(vector<int> acceptable_integers) {
	int usr_in;

	usr_in = safeUserInputInt();
	while (count(acceptable_integers.begin(), acceptable_integers.end(), usr_in) < 1) {
		cout << "Please enter a valid input." << endl;
		usr_in = safeUserInputInt();
	}

	return usr_in;
}

string safeUserInput(vector<string> acceptable_strings) {
	string usr_in;

	usr_in = safeUserInputStr();
	while (count(acceptable_strings.begin(), acceptable_strings.end(), usr_in) < 1) {
		cout << "Please enter a valid input." << endl;
		usr_in = safeUserInputStr();
	}

	return usr_in;
}
