#include <tuple>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class ShopItem {
private:
	string name;
	int price;
	int quantity;
public:
	ShopItem(string n, int p, int q) {
		name = n;
		price = p;
		quantity = q;
	}
};

class ShopInventory {

	vector<ShopItem> inventory;
	tuple<tuple<int, int>, tuple<int, int>> food_ranges = { {0,600}, {1,4} };
	tuple<tuple<int, int>, tuple<int, int>> oxen_ranges = { {0,4}, {1,20} };
	tuple<tuple<int, int>, tuple<int, int>> clothing_ranges = { {0,16}, {1,16} };
	tuple<tuple<int, int>, tuple<int, int>> bullets_ranges = { {0,400}, {1,18} };
	tuple<tuple<int, int>, tuple<int, int>> wheels_ranges = { {0,4}, {1,20} };
	tuple<tuple<int, int>, tuple<int, int>> axels_ranges = { {0,4}, {1,6} };
	tuple<tuple<int, int>, tuple<int, int>> tongues_ranges = { {0,4}, {1,5} };

	ShopInventory(int ran_seed) {
		srand(ran_seed);
		randomizeInventory();
	}

	void randomizeInventory() {
		inventory.push_back(ShopItem("Food", rand() % 600, (rand() % 4) + 1));
		
	}

	void setInventory(vector<int>, vector<int>) {
		
	}


};