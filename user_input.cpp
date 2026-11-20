#include <iostream>
#include <string>

using namespace std;



string safeUserInputString() {
	string text;
	cin >> text;

	if (cin.fail()) {
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		text = "";
	}

	return text;
}

