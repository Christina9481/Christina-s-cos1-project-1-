#include "EmergencyEvent.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Selects and displays a random emergency event.
void EmergencyEvent::DisplayRandomEvent()
{
	// Generate a random number from 1 through 5
	int eventNumber = (rand() % 5) + 1;

	std::cout << "\n--- Random Emergency Event ---\n";

	// Displays the emergency based on the random number.
	switch (eventNumber)
	{
	case 1:
        std::cout << "POWER OUTAGE\n";
        std::cout << "The electricity in your home suddenly goes out.\n";
        break;

    case 2:
        std::cout << "TORNADO\n";
        std::cout << "A tornado warning has been issued for your area.\n";
        break;

    case 3:
        std::cout << "WATER SUPPLY INTERRUPTION\n";
        std::cout << "Your home suddenly loses access to running water.\n";
        break;

    case 4:
        std::cout << "HOUSE FIRE\n";
        std::cout << "Smoke is detected inside your home.\n";
        break;

    case 5:
        std::cout << "WINTER STORM\n";
        std::cout << "A winter storm is approaching your area.\n";
        break;

	}
}