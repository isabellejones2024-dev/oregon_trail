struct Inventory
{
    unordered_map<string, int> supplies = {
        {"oxen", 0},
        {"food", 0},
        {"clothing", 0},
        {"bullets", 0},
        {"wheels", 0},
        {"axles", 0},
        {"tongues", 0}
    };

    double money = 0.0;
};

struct PartyMember
{
    string name;
    int injurySeverity = 0;
    int injuryTime = 0;
};

struct Player
{
    string name;
    string occupation;
    int health = 100;
    int pace = 2;

    vector<PartyMember> party;
    Inventory inventory;
};

double getStartingMoney(const string& occupation);
