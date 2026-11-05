#include "Household.h" // Connects this source file to the class declaration.
#include <iostream>

// Creates a new Household object.
// All preparations start as unavailable.
Household::Household()
{
	hasFlashlights = false;
	hasFoodAndWater = false;
	hasBlankets = false;
	hasEmergencyContacts = false;
	hasRadio = false;

    checklistCompleted = false;
}

// Counts how many preparations are available.
int Household::CalculatePreparedness()
{
    int totalPrepared = 0;

    if (hasFlashlights)
    {
        totalPrepared++;
    }

    if (hasFoodAndWater)
    {
        totalPrepared++;
    }

    if (hasBlankets)
    {
        totalPrepared++;
    }

    if (hasEmergencyContacts)
    {
        totalPrepared++;
    }

    if (hasRadio)
    {
        totalPrepared++;
    }

    return totalPrepared;
}

// Displays the household preparedness checklist.
void Household::Display()
{
    // Check whether the household checklist was completed before.
    if (checklistCompleted)
    {
        std::cout << "\n===== SAVED HOUSEHOLD PREPAREDNESS =====\n";

        std::cout << "Flashlights and batteries: "
            << (hasFlashlights ? "Yes" : "No") << "\n";

        std::cout << "Food and water: "
            << (hasFoodAndWater ? "Yes" : "No") << "\n";

        std::cout << "Extra blankets: "
            << (hasBlankets ? "Yes" : "No") << "\n";

        std::cout << "Emergency contacts: "
            << (hasEmergencyContacts ? "Yes" : "No") << "\n";

        std::cout << "Battery-powered radio: "
            << (hasRadio ? "Yes" : "No") << "\n";

        std::cout << "\nPreparations completed: "
            << CalculatePreparedness() << " out of 5.\n";

        int updateChoice = 0;

        std::cout << "\nWould you like to update your checklist?\n";
        std::cout << "1. Yes\n";
        std::cout << "2. No\n";
        std::cout << "Enter your choice: ";

        while (!(std::cin >> updateChoice)
            || updateChoice < 1 || updateChoice > 2)
        {
            std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }

        // Return to the menu if the user does not want to update.
        if (updateChoice == 2)
        {
            return;
        }
    }

    int answer = 0;

    std::cout << "\n===== POWER OUTAGE PREPAREDNESS CHECKLIST =====\n";
    std::cout << "Answer 1 for Yes or 2 for No.\n";

    // Check for flashlights and extra batteries.
    std::cout << "\n1. Do you have flashlights and extra batteries?\n";
    std::cout << "1. Yes\n2. No\n";

    while (!(std::cin >> answer) || answer < 1 || answer > 2)
    {
        std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    hasFlashlights = (answer == 1);

    // Check for drinking water and nonperishable food.
    std::cout << "\n2. Do you have drinking water and nonperishable food?\n";
    std::cout << "1. Yes\n2. No\n";

    while (!(std::cin >> answer) || answer < 1 || answer > 2)
    {
        std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    hasFoodAndWater = (answer == 1);

    // Check for extra blankets.
    std::cout << "\n3. Do you have extra blankets?\n";
    std::cout << "1. Yes\n2. No\n";

    while (!(std::cin >> answer) || answer < 1 || answer > 2)
    {
        std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    hasBlankets = (answer == 1);

    // Check for emergency contact information.
    std::cout << "\n4. Do you have emergency contacts easily accessible?\n";
    std::cout << "1. Yes\n2. No\n";

    while (!(std::cin >> answer) || answer < 1 || answer > 2)
    {
        std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    hasEmergencyContacts = (answer == 1);

    // Check for a battery-powered radio.
    std::cout << "\n5. Do you have a battery-powered radio?\n";
    std::cout << "1. Yes\n2. No\n";

    while (!(std::cin >> answer) || answer < 1 || answer > 2)
    {
        std::cout << "Invalid input. Enter 1 for Yes or 2 for No: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    hasRadio = (answer == 1);

    // Display the preparedness score.
    std::cout << "\n===== PREPAREDNESS RESULTS =====\n";
    std::cout << "Preparations completed: "
        << CalculatePreparedness() << " out of 5.\n";

    // Remembering that the checklist has been completed
    checklistCompleted = true;
}