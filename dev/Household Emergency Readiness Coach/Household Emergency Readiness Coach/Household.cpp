#include "Household.h" // Connects this source file to the class declaration.
#include <iostream>

// Defines the Household constructor.
// This runs when a Household object is created 

Household::Household()
{

}


// Displays household preparedness information.
void Household::Display()
{
	std::cout << "\n===== Household Preparedness =====\n";
	std::cout << "1. Keep emergency drinking water and food available.\n";
	std::cout << "2. Store flashlights and extra batteries.\n";
	std::cout << "3. Keep extra blankets and pillows for warmth.\n";
	std::cout << "4. Keep a first-aid kit available.\n";
	std::cout << "5. Keep emergency contacts in an accessible place.\n";
}
