#include "Scenario.h"
#include <iostream>
#include "Input.h"


// Defines the Scenario constructor.
Scenario::Scenario()
{

}

// Displays an interactive emergency scenario.
int Scenario::Display()
{
    std::cout << "\n===== Emergency Scenario =====\n";
    std::cout << "A storm knocks out the power at night.\n";
    std::cout << "Your household needs light. What should you do first?\n";

    std::cout << "\n1. Light candles and leave them unattended.\n";
    std::cout << "2. Get flashlights and check on everyone.\n";
    std::cout << "3. Open the refrigerator to look for food.\n";

    // Gets a validated choice using the named constants.
    int choice = Input::GetNumber(
        "Enter your choice (1-3): ",
        MIN_SCENARIO_CHOICE,
        MAX_SCENARIO_CHOICE);

    // Explain why the selected answer is safe or unsafe.
    if (choice == 1)
    {
        std::cout << "\nNot the safest choice.\n";
        std::cout << "Unattended candles can start fires.\n";
        std::cout << "Use flashlights instead to reduce fire risks.\n";
    }
    else if (choice == 2)
    {
        std::cout << "\nCorrect! This is the safest choice.\n";
        std::cout << "Flashlights provide light without an open flame.\n";
        std::cout << "Checking on everyone helps make sure household members are safe.\n";
    }
    else if (choice == 3)
    {
        std::cout << "\nNot the safest choice.\n";
        std::cout << "Opening the refrigerator lets cold air escape.\n";
        std::cout << "Keep refrigerator and freezer doors closed during a power outage.\n";
    }

    // Returns the user's valid answer to ReadyQuest.
    return choice;
}