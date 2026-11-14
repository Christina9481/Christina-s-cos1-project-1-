
#include "Household.h"
#include "Input.h"
#include <iostream>
#include <fstream>

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

// Displays missing supplies and a household readiness summary.
void Household::DisplayPreparednessFeedback()
{
    int totalPrepared = CalculatePreparedness();

    std::cout << "\n===== HOUSEHOLD READINESS SUMMARY =====\n";
    std::cout << "Preparedness items completed: "
        << totalPrepared << " out of " << TOTAL_PREPARATIONS << ".\n";

    if (totalPrepared < TOTAL_PREPARATIONS)
    {
        std::cout << "\nItems that still need attention:\n";
    }

    if (!hasFlashlights)
    {
        std::cout << "- Flashlights and extra batteries\n";
    }

    if (!hasFoodAndWater)
    {
        std::cout << "- Drinking water and nonperishable food\n";
    }

    if (!hasBlankets)
    {
        std::cout << "- Extra blankets\n";
    }

    if (!hasEmergencyContacts)
    {
        std::cout << "- Emergency contact information\n";
    }

    if (!hasRadio)
    {
        std::cout << "- Battery-powered radio\n";
    }

    if (totalPrepared == TOTAL_PREPARATIONS)
    {
        std::cout << "\nExcellent! Your household has all five preparations.\n";
    }
    else if (totalPrepared >= 3)
    {
        std::cout << "\nGood progress! Your household has some important preparations.\n";
    }
    else
    {
        std::cout << "\nYour household needs more emergency preparations.\n";
    }
}

// Checks whether the hosuehold has flashlights.
bool Household::HasFlashlights()
{
    return hasFlashlights;
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

        // Gets a validated choice about updating the checklist.
        int updateChoice = Input::GetNumber(
            "\nWould you like to update your checklist?\n"
            "1. Yes\n"
            "2. No\n"
            "Enter your choice: ", YES_CHOICE, NO_CHOICE);

        // Return to the menu if the user does not want to update.
        if (updateChoice == NO_CHOICE)
        {
            return;
        }
    }

    int answer = 0;

    std::cout << "\n===== POWER OUTAGE PREPAREDNESS CHECKLIST =====\n";
    std::cout << "Answer 1 for Yes or 2 for No.\n";

    // Check for flashlights and extra batteries.
    answer = Input::GetNumber(
        "\n1. Do you have flashlights and extra batteries?\n"
        "1. Yes\n2. No\n"
        "Enter your choice: ", YES_CHOICE, NO_CHOICE);

    hasFlashlights = (answer == YES_CHOICE);

    // Check for drinking water and nonperishable food.
    answer = Input::GetNumber(
        "\n2. Do you have drinking water and nonperishable food?\n"
        "1. Yes\n2. No\n"
        "Enter your choice: ", YES_CHOICE, NO_CHOICE);

    hasFoodAndWater = (answer == YES_CHOICE);

    // Check for extra blankets.
    answer = Input::GetNumber(
        "\n3. Do you have extra blankets?\n"
        "1. Yes\n2. No\n"
        "Enter your choice: ", YES_CHOICE, NO_CHOICE);

    hasBlankets = (answer == YES_CHOICE);

    // Check for emergency contact information.
    answer = Input::GetNumber(
        "\n4. Do you have emergency contacts easily accessible?\n"
        "1. Yes\n2. No\n"
        "Enter your choice: ", YES_CHOICE, NO_CHOICE);

    hasEmergencyContacts = (answer == YES_CHOICE);

    // Check for a battery-powered radio.
    answer = Input::GetNumber(
        "\n5. Do you have a battery-powered radio?\n"
        "1. Yes\n2. No\n"
        "Enter your choice: ", YES_CHOICE, NO_CHOICE);

    hasRadio = (answer == YES_CHOICE);

    // Display the preparedness score and readiness feedback.
    DisplayPreparednessFeedback();

    // Remember that the checklist has been completed.
    checklistCompleted = true;
}

// Saves the household preparedness answers to a file.
void Household::SaveHousehold()
{
    std::ofstream outFile("ReadyQuestHousehold.txt");

    if (!outFile)
    {
        std::cout << "Unable to save household information.\n";
        return;
    }

    outFile << hasFlashlights << "\n";
    outFile << hasFoodAndWater << "\n";
    outFile << hasBlankets << "\n";
    outFile << hasEmergencyContacts << "\n";
    outFile << hasRadio << "\n";
    outFile << checklistCompleted << "\n";

    outFile.close();

    std::cout << "Household information saved successfully!\n";
}

// Loads previously saved household preparedness answers.
void Household::LoadHousehold()
{
    std::ifstream inFile("ReadyQuestHousehold.txt");

    if (!inFile)
    {
        std::cout << "No saved household information found.\n";
        return;
    }

    if (!(inFile >> hasFlashlights
        >> hasFoodAndWater
        >> hasBlankets
        >> hasEmergencyContacts
        >> hasRadio
        >> checklistCompleted))
    {
        std::cout << "Unable to read household information.\n";
        return;
    }

    inFile.close();

    std::cout << "Household information loaded successfully!\n";
}
