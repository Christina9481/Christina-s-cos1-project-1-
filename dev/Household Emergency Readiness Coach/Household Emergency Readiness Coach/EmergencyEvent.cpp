#include "EmergencyEvent.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Input.h"


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
    {
        std::cout << "POWER OUTAGE\n";
        std::cout << "The electricity in your home suddenly goes out.\n";

        std::cout << "\nWhat should you do first?\n";
        std::cout << "1. Light candles and leave them unattended.\n";
        std::cout << "2. Get flashlights and check on everyone.\n";
        std::cout << "3. Open the refrigerator.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", 1, 3);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Flashlights are safer than open flames.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Use flashlights and check on everyone.\n";
        }

        break;
    }
	
    case 2:
    {
        std::cout << "TORNADO\n";
        std::cout << "A tornado warning has been issued for your area.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Go outside to watch the storm.\n";
        std::cout << "2. Move to a basement or interior room away from windows.\n";
        std::cout << "3. Stand near a window to watch for danger.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", 1, 3);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Move to a basement or small interior room.\n";
            std::cout << "Stay away from windows and protect your head.\n";
        }
        else
        {
            std::cout << "\nThat is not safe during a tornado warning.\n";
            std::cout << "Seek shelter in a basement or interior room away from windows.\n";
        }

        break;
    }

    case 3:
    {
        std::cout << "WATER SUPPLY INTERRUPTION\n";
        std::cout << "Your home suddenly loses access to running water.\n";

        std::cout << "\nWhat should you do first?\n";
        std::cout << "1. Use bottled water stored for emergencies.\n";
        std::cout << "2. Drink water from an unknown outdoor source.\n";
        std::cout << "3. Assume the water will return immediately.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", 1, 3);

        if (choice == 1)
        {
            std::cout << "\nCorrect! Use your stored emergency water supply.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Use stored safe drinking water when available.\n";
        }

        break;
    }

    case 4:
    {
        std::cout << "HOUSE FIRE\n";
        std::cout << "Smoke is detected inside your home.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Try to collect your belongings.\n";
        std::cout << "2. Get everyone outside and call 911 from a safe location.\n";
        std::cout << "3. Hide inside a closet.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", 1, 3);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Get everyone out and call 911 from safety.\n";
        }
        else
        {
            std::cout << "\nThat is dangerous during a house fire.\n";
            std::cout << "Leave immediately. Do not stop to collect belongings.\n";
        }

        break;
    }

    case 5:
    {
        std::cout << "WINTER STORM\n";
        std::cout << "A winter storm is approaching your area.\n";

        std::cout << "\nWhat should you do to prepare?\n";
        std::cout << "1. Wait until the storm arrives to gather supplies.\n";
        std::cout << "2. Prepare food, water, warm clothing, and emergency supplies.\n";
        std::cout << "3. Travel during the storm to buy supplies.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", 1, 3);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Prepare supplies before the storm arrives.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Prepare early and avoid unnecessary travel during severe weather.\n";
        }

        break;
    }

	}
}