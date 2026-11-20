void startTown(Player&player, int& departureMonth)
{
    bool choosingMonth = true;
    system("cls");

    while (choosingMonth)
    {
        cout << "It is 1848. Your journey begins in Independence, Missouri.\n"
            << "What month would you like to leave?\n" << endl;
        cout << "1. March\n" << endl;
        cout << "2. April\n" << endl;
        cout << "3. May\n" << endl;
        cout << "4. June\n" << endl;
        cout << "5. July\n" << endl;
        cout << "6. Learn More\n" << endl;
        string choice;
        cout << "What is your choice?";
        cin >> choice;

        if (choice == "1")
        {
            departureMonth = 3;
            choosingMonth = false;
        }
        else if (choice == "2")
        {
            departureMonth = 4;
            choosingMonth = false;
        }
        else if (choice == "3")
        {
            departureMonth = 5;
            choosingMonth = false;
        }
        else if (choice == "4")
        {
            departureMonth = 6;
            choosingMonth = false;
        }
        else if (choice == "5")
        {
            departureMonth = 7;
            choosingMonth = false;
        }
        else if (choice == "6")
        {
            system("cls");
            cout << "\nLeaving early may mean cold weather and less grass.\n"
                << "Leaving late may mean reaching the mountains in winter.\n"
                << "Try to balance these risks when choosing your month.\n\n";
        }
        else
        {
            cout << "\nInvalid choice. Please enter 1 through 6.\n\n";
        }
    }

    // Matt's General Store shopping code goes here next.
    system("cls");
    cout << "\nBefore leaving Independence, buy your supplies.\n";
    cout << "You have $" << player.inventory.money << " to spend.\n";

    double startingMoney = player.inventory.money;
    bool shopping = true;

    cout << "\nPress Enter to return...";
    cin.ignore();
    cin.get();

    while (shopping)
    {
        system("cls");
        cout << "\nMATT'S GENERAL STORE\n";
        cout << "1. Oxen       - $40 per yoke (2 oxen)\n";
        cout << "2. Food       - $0.20 per pound\n";
        cout << "3. Clothing   - $10 per set\n";
        cout << "4. Ammunition - $2 per box (20 bullets)\n";
        cout << "5. Spare parts\n";
        cout << "6. Finish shopping\n";

        cout << "\nTotal spent: $" << startingMoney - player.inventory.money << endl;
        cout << "Money remaining: $" << player.inventory.money << endl;
        cout << "What would you like to buy? ";

        string choice;
        cin >> choice;

        if (choice == "6")
        {
            shopping = false;
            continue;
        }

        double price = 0;
        int* supply = nullptr;
        int units = 1;
        system("cls");

        if (choice == "1")
        {
            cout << "\nEach yoke contains 2 oxen and costs $40.\n";
            cout << "At least 3 yoke are recommended.\n";
            cout << "How many yoke would you like? ";

            price = 40;
            supply = &player.inventory.supplies.at("oxen");
            units = 2;
        }
        else if (choice == "2")
        {
            cout << "\nFood costs $0.20 per pound.\n";
            cout << "200 pounds per person are recommended.\n";
            cout << "How many pounds would you like? ";

            price = 0.20;
            supply = &player.inventory.supplies.at("food");
        }
        else if (choice == "3")
        {
            cout << "\nClothing costs $10 per set.\n";
            cout << "At least 2 sets per person are recommended.\n";
            cout << "How many sets would you like? ";

            price = 10;
            supply = &player.inventory.supplies.at("clothing");
        }
        else if (choice == "4")
        {
            cout << "\nEach box costs $2 and contains 20 bullets.\n";
            cout << "How many boxes would you like? ";

            price = 2;
            supply = &player.inventory.supplies.at("bullets");
            units = 20;
        }
        else if (choice == "5")
        {
            cout << "\nSPARE PARTS - $10 each\n";
            cout << "1. Wagon wheels\n";
            cout << "2. Wagon axles\n";
            cout << "3. Wagon tongues\n";
            cout << "Which part would you like? ";

            string part;
            cin >> part;

            system("cls");

            if (part == "1")
            {
                supply = &player.inventory.supplies.at("wheels");
            }
            else if (part == "2")
            {
                supply = &player.inventory.supplies.at("axles");
            }
            else if (part == "3")
            {
                supply = &player.inventory.supplies.at("tongues");
            }
            else
            {
                cout << "Invalid part choice.\n";
                continue;
            }

            price = 10;
            cout << "How many would you like? ";
        }
        else
        {
            cout << "Invalid choice. Enter 1 through 6.\n";
            continue;
        }

        int quantity;

        if (!(cin >> quantity))
        {
            // Clear invalid input so the menu can continue.
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Please enter a whole number.\n";
            continue;
        }

        if (quantity < 0)
        {
            cout << "You cannot buy a negative amount.\n";
            continue;
        }

        double cost = quantity * price;

        if (cost > player.inventory.money)
        {
            cout << "You do not have enough money.\n";
            continue;
        }

        // Save the supplies and pay for them.
        *supply += quantity * units;
        player.inventory.money -= cost;

        cout << "Purchase complete! Cost: $" << cost << endl;
    }
    system("cls");
    cout << "\nYOUR SUPPLIES\n";
    cout << "Oxen: " << player.inventory.supplies.at("oxen") << endl;
    cout << "Food: " << player.inventory.supplies.at("food") << " pounds\n";
    cout << "Clothing: " << player.inventory.supplies.at("clothing") << " sets\n";
    cout << "Bullets: " << player.inventory.supplies.at("bullets") << endl;
    cout << "Wheels: " << player.inventory.supplies.at("wheels") << endl;
    cout << "Axles: " << player.inventory.supplies.at("axles") << endl;
    cout << "Wagon tongues: " << player.inventory.supplies.at("tongues") << endl;
    cout << "Money remaining: $" << player.inventory.money << endl;

}
