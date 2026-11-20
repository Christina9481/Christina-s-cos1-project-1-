#include "Scenario.h"
#include <iostream>
#include "Input.h"


// Defines the Scenario constructor.
Scenario::Scenario()
{

}

// Displays an interactive emergency scenario.
int Scenario::DisplayMenu()
{
    std::cout << "\n===== INTERACTIVE EMERGENCY SCENARIOS =====\n";
    std::cout << "1. Power Outage\n";
    std::cout << "2. Tornado\n";
    std::cout << "3. Hurricane\n";
    std::cout << "4. House Fire\n";
    std::cout << "5. Earthquake\n";
    std::cout << "6. Return to Main Menu\n";

    return Input::GetNumber(
        "Choose a scenario (1-6): ",
        MIN_MENU_CHOICE, MAX_MENU_CHOICE);
}

// Returns the name of the selected emergency scenario.
std::string Scenario::GetScenarioName(int scenarioIndex)
{
    std::string scenarioName = "";

    switch (scenarioIndex)
    {
    case 1:
        scenarioName = "Power Outage Scenario";
        break;
    case 2:
        scenarioName = "Tornado Scenario";
        break;
    case 3:
        scenarioName = "Hurricane Scenario";
        break;
    case 4:
        scenarioName = "House Fire Scenario";
        break;
    case 5:
        scenarioName = "Earthquake Scenario";
        break;
    }

    return scenarioName;
}

// Displays the selected emergency scenario.
// Returns true for a safe decision and false for an unsafe decision.
bool Scenario::Display(int scenarioIndex)
{
    int choice = 0;
    bool correct = false;

    switch (scenarioIndex)
    {
    case 1:
        std::cout << "\n===== POWER OUTAGE SCENARIO =====\n";
        std::cout << "A storm knocks out the power at night.\n";
        std::cout << "Your household needs light. What should you do first?\n";
        std::cout << "\n1. Light candles and leave them unattended.\n";
        std::cout << "2. Get flashlights and check on everyone.\n";
        std::cout << "3. Open the refrigerator to look for food.\n";

        choice = Input::GetNumber(
            "Enter your choice (1-3): ",
            MIN_SCENARIO_CHOICE, MAX_SCENARIO_CHOICE);

        if (choice == 2)
        {
            correct = true;
            std::cout << "\nCorrect! Flashlights provide light without an open flame.\n";
            std::cout << "Checking on everyone helps make sure household members are safe.\n";
        }
        else if (choice == 1)
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Unattended candles can start fires. Use flashlights instead.\n";
        }
        else
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Keep refrigerator doors closed to preserve cold air.\n";
        }
        break;

    case 2:
        std::cout << "\n===== TORNADO SCENARIO =====\n";
        std::cout << "A tornado warning is issued for your area.\n";
        std::cout << "What should your household do?\n";
        std::cout << "\n1. Stand outside to watch for the tornado.\n";
        std::cout << "2. Go to a basement or small interior room on the lowest floor.\n";
        std::cout << "3. Stay near windows to watch the weather.\n";

        choice = Input::GetNumber(
            "Enter your choice (1-3): ",
            MIN_SCENARIO_CHOICE, MAX_SCENARIO_CHOICE);

        if (choice == 2)
        {
            correct = true;
            std::cout << "\nCorrect! A basement or small interior room on the lowest floor is safer.\n";
            std::cout << "Stay away from windows and protect your head and neck.\n";
        }
        else if (choice == 1)
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Flying debris can cause serious injuries. Get to shelter immediately.\n";
        }
        else
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Windows can break during a tornado. Move to a protected interior space.\n";
        }
        break;

    case 3:
        std::cout << "\n===== HURRICANE SCENARIO =====\n";
        std::cout << "A hurricane is approaching, and local officials issue an evacuation order.\n";
        std::cout << "What should your household do?\n";
        std::cout << "\n1. Follow the evacuation instructions and leave using a recommended route.\n";
        std::cout << "2. Ignore the order and wait until the storm arrives.\n";
        std::cout << "3. Drive toward the coast to watch the storm.\n";

        choice = Input::GetNumber(
            "Enter your choice (1-3): ",
            MIN_SCENARIO_CHOICE, MAX_SCENARIO_CHOICE);

        if (choice == 1)
        {
            correct = true;
            std::cout << "\nCorrect! Follow official evacuation instructions.\n";
            std::cout << "Take your emergency supplies and use recommended routes.\n";
        }
        else if (choice == 2)
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Waiting can leave you trapped by flooding or dangerous conditions.\n";
        }
        else
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Coastal areas can experience dangerous storm surge and flooding.\n";
        }
        break;

    case 4:
        std::cout << "\n===== HOUSE FIRE SCENARIO =====\n";
        std::cout << "You smell smoke and discover a fire inside your home.\n";
        std::cout << "What should you do first?\n";
        std::cout << "\n1. Hide in a closet until the smoke clears.\n";
        std::cout << "2. Collect valuables before leaving.\n";
        std::cout << "3. Get everyone outside, stay outside, and call 911.\n";

        choice = Input::GetNumber(
            "Enter your choice (1-3): ",
            MIN_SCENARIO_CHOICE, MAX_SCENARIO_CHOICE);

        if (choice == 3)
        {
            correct = true;
            std::cout << "\nCorrect! Get everyone outside and stay outside.\n";
            std::cout << "Call 911 from a safe location. Never re-enter a burning home.\n";
        }
        else if (choice == 1)
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Smoke can quickly become deadly. Leave the home immediately.\n";
        }
        else
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Do not delay your escape to collect belongings.\n";
        }
        break;

    case 5:
        std::cout << "\n===== EARTHQUAKE SCENARIO =====\n";
        std::cout << "The ground begins shaking while you are inside your home.\n";
        std::cout << "What should you do?\n";
        std::cout << "\n1. Run outside while the ground is shaking.\n";
        std::cout << "2. Drop, cover, and hold on under sturdy furniture.\n";
        std::cout << "3. Stand next to a window.\n";

        choice = Input::GetNumber(
            "Enter your choice (1-3): ",
            MIN_SCENARIO_CHOICE, MAX_SCENARIO_CHOICE);

        if (choice == 2)
        {
            correct = true;
            std::cout << "\nCorrect! Drop, cover, and hold on.\n";
            std::cout << "Protect your head and neck and stay away from windows.\n";
        }
        else if (choice == 1)
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Falling debris can injure you. Stay inside and take cover while shaking continues.\n";
        }
        else
        {
            std::cout << "\nNot the safest choice.\n";
            std::cout << "Windows can shatter during an earthquake. Move away and take cover.\n";
        }
        break;
    }

    return correct;
}