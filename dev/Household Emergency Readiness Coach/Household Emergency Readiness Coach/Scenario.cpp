#include "Scenario.h"
#include <iostream>


// Defines the Scenario constructor.
// This runs when a Scenario object is created.

Scenario::Scenario()
{

}

// Displays an interactive emergency scenario.
void Scenario::Display()
{
	int choice = 0;

	std::cout << "\n===== Emergency Scenrio =====\n";
	std::cout << "A storm knocks out the power at night.";
	std::cout << "Your household needs light. What should you do first?\n";
	std::cout << "1. Light candles and leave them unattended.\n";
	std::cout << "2. Get flashlights and check on everyone.\n";
	std::cout << "3. Open the refreigerator to look for food.\n";
	std::cout << "Enter your choice (1-3): ";

	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "Not the safest choice. Unattended candles can cause fires.\n";
	}
	else if (choice == 2)
	{
		std::cout << "Correct! A flashlight is safer, and checking on everyone helps keep your household safe.\n";
	}
	else if (choice == 3)
	{
		std::cout << "Try again next time. keep the refrigerator closed to help preserve food.\n";
	}
	else
	{
		std::cout << "Invalid choice. Please select 1, 2, or 3.\n";
	}
}