#include "player.h"

double getStartingMoney(const string& occupation)
{
    if (occupation == "Banker")
        return 1600;

    if (occupation == "Carpenter")
        return 800;

    return 400;
}
