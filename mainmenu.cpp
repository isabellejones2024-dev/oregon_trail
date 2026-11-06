#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "WELCOME TO THE OREGON TRAIL!" << endl;
    cout << endl;
    bool running = true;

    while (running)
    {
        string choice;
        cout << "You may:" << endl;
        cout << "1. Travel the trail" << endl;
        cout << "2. Learn about the trail" << endl;
        cout << "3. See the Oregon Top Ten" << endl;
        cout << "4. End" << endl;
        cout << "What is your choice?";
        cin >> choice;

        if (choice == "1")
        {
            string occupation;
            bool choosingOccupation = true;

            while (choosingOccupation)
            {
                system("cls");
          
                cout << "Many kinds of people made the trip to Oregon." << endl;
                cout << "You may:" << endl;
                cout << "1. Be a banker from Boston" << endl;
                cout << "2. Be a carpenter from Ohio" << endl;
                cout << "3. Be a farmer from Illinois" << endl;
                cout << "4. Find out the differences between these choices" << endl;
                cout << "What is your choice?";
                string occupationchoice;
                cin >> occupationchoice;
                 

                if (occupationchoice == "1")
                {
                    occupation = "Banker";
                    choosingOccupation = false;
                }
                else if (occupationchoice == "2")
                {
                    occupation = "Carpenter";
                    choosingOccupation = false;
                }
                else if (occupationchoice == "3")
                {
                    occupation = "Farmer";
                    choosingOccupation = false;
                }
                else if (occupationchoice == "4")
                {
                    system("cls");

                    cout << "Traveling to Oregon isn't easy!\n"
                        << "But if you're a banker, you'll\n"
                        << "have more money for supplies\n"
                        << "and services than a carpenter\n"
                        << "or a farmer.\n\n"
                        << "However, the harder you have\n"
                        << "to try, the more points you\n"
                        << "deserve! Therefore, the\n"
                        << "farmer earns the greatest\n"
                        << "number of points and the\n"
                        << "banker earns the least.\n";

                    cout << "\nPress Enter to return...";
                    cin.ignore();
                    cin.get();
                }
                
            }
            system("cls");
            
            cout << "You are a " << occupation << "." << endl;
            cout << endl;

            cout << "\nPress Enter to return...";
            cin.ignore();
            cin.get();

            system("cls");

            string leaderName;
            string member1;
            string member2;
            string member3;
            string member4;

            cout << "What is the first name of the wagon leader? ";
            cin >> leaderName;

            cout << endl;

            cout << "What is the first name of the second person? ";
            cin >> member1;

            cout << "What is the first name of the third person? ";
            cin >> member2;

            cout << "What is the first name of the fourth person? ";
            cin >> member3;

            cout << "What is the first name of the fifth person? ";
            cin >> member4;

            system("cls");

            cout << "YOUR WAGON PARTY" << endl;
            cout << endl;

            cout << "Occupation: " << occupation << endl;
            cout << "Wagon Leader: " << leaderName << endl;
            cout << endl;

            cout << "Party Members:" << endl;
            cout << member1 << endl;
            cout << member2 << endl;
            cout << member3 << endl;
            cout << member4 << endl;

            cout << endl;

            if (occupation == "Banker")
            {
                cout << "Starting Money: $1600" << endl;
            }
            else if (occupation == "Carpenter")
            {
                cout << "Starting Money: $800" << endl;
            }
            else if (occupation == "Farmer")
            {
                cout << "Starting Money: $400" << endl;
            }

            cout << endl;
            cout << "Your party is ready to begin the journey." << endl;
            cout << endl;
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();

            system("cls");

            // Future handoff to Trail.cpp
            running = false;
            // startTrail();
        }
        else if (choice == "2")
        {
            system("cls");
            cout << "LEARN ABOUT THE TRAIL" << endl;
            cout << endl;

            cout << "Try taking a journey by\n"
                << "covered wagon across 2000\n"
                << "miles of plains, rivers, and\n"
                << "mountains. Try! On the\n"
                << "plains, will you slosh your\n"
                << "oxen through mud and\n"
                << "water-filled ruts or will you\n"
                << "plod through dust six inches\n"
                << "deep?\n";

            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();

            system("cls");

            cout << "How will you cross the rivers?\n"
                << "If you have money, you might\n"
                << "take a ferry (if there is a\n"
                << "ferry). Or, you can ford the\n"
                << "river and hope you and your\n"
                << "wagon aren't swallowed alive!\n";

            cout << "\nPress Enter to continue...";
            cin.get();

            system("cls");

            cout << "What about supplies? Well, if\n"
                << "you're low on food you can\n"
                << "hunt. You might get a buffalo...\n"
                << "you might. And there are\n"
                << "bear in the mountains.\n";

            cout << "\nPress Enter to continue...";
            cin.get();

            system("cls");

            cout << "At the Dalles, you can try\n"
                << "navigating the Columbia River,\n"
                << "but if running the rapids with\n"
                << "a makeshift raft makes you\n"
                << "queasy, better take the Barlow\n"
                << "Road.\n";

            cout << "\nPress Enter to continue...";
            cin.get();

            system("cls");

            cout << "If for some reason you don't\n"
                << "survive -- your wagon burns,\n"
                << "or thieves steal your oxen, or\n"
                << "you run out of provisions, or\n"
                << "you die of cholera -- don't\n"
                << "give up! Try again... and\n"
                << "again...until your name is up\n"
                << "with the others on The Oregon\n"
                << "Top Ten.\n";

            cout << "\nPress Enter to return to the main menu...";
            cin.get();

            system("cls");
        }
        else if (choice == "3")
        {
            // are we actually doing this one 
            // place holder code
            system("cls");

            cout << "OREGON TOP TEN" << endl;
            cout << endl;
            cout << "No scores available." << endl;

            cout << "\nPress Enter to return...";
            cin.ignore();
            cin.get();

            system("cls");
        }
        else if (choice == "4")
        {
            running = false;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
    system("cls");
    cout << "Thanks for traveling the trail!!" << endl;
}