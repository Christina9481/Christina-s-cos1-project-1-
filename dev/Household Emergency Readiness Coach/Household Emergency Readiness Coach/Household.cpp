
#include "Household.h"
#include "Input.h"
#include <iostream>
#include <fstream>
#include <string>

// Creates a new Household object.
// All preparations start as unavailable.
Household::Household()
{
    // Intializes all five emergency checklist.
    for (int i = 0; i < TOTAL_EMERGENCIES; i++)
    {
        checklistCompleted[i] = false;

        for (int j = 0; j < TOTAL_PREPARATIONS; j++)
        {
            preparations[i][j] = false;
        }
    }
}

// Counts how many preparations are available for an emergency.
int Household::CalculatePreparedness(int emergencyIndex)
{
    int totalPrepared = 0;

    if (emergencyIndex >= 0 && emergencyIndex < TOTAL_EMERGENCIES)
    {
        // Counts the yes answers for the selected emergency.
        for (int i = 0; i < TOTAL_PREPARATIONS; i++)
        {
            if (preparations[emergencyIndex][i])
            {
                totalPrepared++;
            }
        }
    }

    return totalPrepared;
}
// Displays missing preparation and a readiness summary.
void Household::DisplayPreparednessFeedback(int emergencyIndex)
{
    int totalPrepared = CalculatePreparedness(emergencyIndex);

    std::string preparationNames[TOTAL_PREPARATIONS];

    // Loads the appropriate preparation names.
    switch (emergencyIndex)
    {
    case POWER_OUTAGE:
        preparationNames[0] = "Flashlights and extra batteries";
        preparationNames[1] = "Drinking water and nonperishable food";
        preparationNames[2] = "Extra blankets";
        preparationNames[3] = "Emergency contact information";
        preparationNames[4] = "Battery-powered radio";
        break;

    case TORNADO:
        preparationNames[0] = "A basement or safe interior shelter";
        preparationNames[1] = "A weather radio or warning alerts";
        preparationNames[2] = "Emergency food and water";
        preparationNames[3] = "A family emergency plan";
        preparationNames[4] = "Protective supplies for your safe room";
        break;

    case HURRICANE:
        preparationNames[0] = "An evacuation plan";
        preparationNames[1] = "Emergency food and water";
        preparationNames[2] = "Important documents stored safely";
        preparationNames[3] = "A way to receive weather alerts";
        preparationNames[4] = "Emergency supplies and medications";
        break;

    case HOUSE_FIRE:
        preparationNames[0] = "Working smoke alarms";
        preparationNames[1] = "A fire extinguisher";
        preparationNames[2] = "Planned escape routes";
        preparationNames[3] = "An outdoor family meeting place";
        preparationNames[4] = "Emergency contact information";
        break;

    case EARTHQUAKE:
        preparationNames[0] = "Secured furniture and heavy objects";
        preparationNames[1] = "An emergency supply kit";
        preparationNames[2] = "Safe places to drop, cover, and hold on";
        preparationNames[3] = "Shoes and a flashlight near the bed";
        preparationNames[4] = "A family communication plan";
        break;
    }

    std::cout << "\n===== HOUSEHOLD READINESS SUMMARY =====\n";
    std::cout << "Preparedness items completed: "
        << totalPrepared << " out of " << TOTAL_PREPARATIONS << ".\n";

    if (totalPrepared < TOTAL_PREPARATIONS)
    {
        std::cout << "\nItems that still need attention:\n";

        // Displays each preparation that is not available.
        for (int i = 0; i < TOTAL_PREPARATIONS; i++)
        {
            if (!preparations[emergencyIndex][i])
            {
                std::cout << "- " << preparationNames[i] << "\n";
            }
        }
    }


    if (totalPrepared == TOTAL_PREPARATIONS)
    {
        std::cout << "\nExcellent! All five preparations are available.\n";
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

// Checks whether the household has flashlights.
bool Household::HasFlashlights()
{
    return preparations[POWER_OUTAGE][0];
}


// Displays the household preparedness checklist.
void Household::Display()
{
    int emergencyChoice = 0;
    int emergencyIndex = 0;
    int answer = 0;
    int updatechoice = 0;

    // Displays the five emergency checklist options.
    std::cout << "\n===== HOUSEHOLD PREPAREDNESS CHECKLISTS =====\n";
    std::cout << "1. Power Outage\n";
    std::cout << "2. Tornado\n";
    std::cout << "3. Hurricane\n";
    std::cout << "4. House Fire\n";
    std::cout << "5. Earthquake\n";

    emergencyChoice = Input::GetNumber(
        "Choose an emergency checklist (1-5): ", 1, TOTAL_EMERGENCIES);

    // Converts the menu choice into an array position.
    emergencyIndex = emergencyChoice - 1;

    // Displays saved answers when this checklist was completed before.
    if (checklistCompleted[emergencyIndex])
    {
        std::cout << "\n===== SAVED PREPAREDNESS CHECKLIST =====\n";

        for (int i = 0; i < TOTAL_PREPARATIONS; i++)
        {
            std::cout << "Preparation " << i + 1 << ": "
                << (preparations[emergencyIndex][i] ? "Yes" : "No") << "\n";
        }

        std::cout << "\nPreparations completed: "
            << CalculatePreparedness(emergencyIndex) << " out of 5.\n";

        int updateChoice = Input::GetNumber(
            "\nWould you like to update this checklist?\n"
            "1. Yes\n"
            "2. No\n"
            "Enter your choice: ", YES_CHOICE, NO_CHOICE);

        if (updateChoice == NO_CHOICE)
        {
            return;
        }
    }

    std::string questions[TOTAL_PREPARATIONS];

    // Loads the questions for the selected emergency.
    switch (emergencyIndex)
    {
    case POWER_OUTAGE:
        questions[0] = "Do you have flashlights and extra batteries?";
        questions[1] = "Do you have drinking water and nonperishable food?";
        questions[2] = "Do you have extra blankets?";
        questions[3] = "Do you have emergency contacts easily accessible?";
        questions[4] = "Do you have a battery-powered radio?";
        break;

    case TORNADO:
        questions[0] = "Do you have a basement or safe interior shelter?";
        questions[1] = "Can you receive weather warnings and alerts?";
        questions[2] = "Do you have emergency food and water?";
        questions[3] = "Does your family have a tornado emergency plan?";
        questions[4] = "Do you have protective supplies for your safe room?";
        break;

    case HURRICANE:
        questions[0] = "Do you have an evacuation plan?";
        questions[1] = "Do you have emergency food and water?";
        questions[2] = "Are important documents stored safely?";
        questions[3] = "Can you receive weather alerts?";
        questions[4] = "Do you have emergency supplies and medications?";
        break;

    case HOUSE_FIRE:
        questions[0] = "Do you have working smoke alarms?";
        questions[1] = "Do you have a fire extinguisher?";
        questions[2] = "Does your family know the escape routes?";
        questions[3] = "Do you have an outdoor family meeting place?";
        questions[4] = "Do you have emergency contact information?";
        break;

    case EARTHQUAKE:
        questions[0] = "Are heavy furniture and objects secured?";
        questions[1] = "Do you have an emergency supply kit?";
        questions[2] = "Does your family know to drop, cover, and hold on?";
        questions[3] = "Do you keep shoes and a flashlight near your bed?";
        questions[4] = "Does your family have a communication plan?";
        break;
    }

    std::cout << "\nAnswer 1 for Yes or 2 for No.\n";

    // Collects the five preparedness answers.
    for (int i = 0; i < TOTAL_PREPARATIONS; i++)
    {
        answer = Input::GetNumber(
            "\n" + std::to_string(i + 1) + ". " + questions[i] +
            "\n1. Yes\n2. No\nEnter your choice: ",
            YES_CHOICE, NO_CHOICE);

        preparations[emergencyIndex][i] = (answer == YES_CHOICE);
    }

    // Displays the selected checklist's readiness summary.
    DisplayPreparednessFeedback(emergencyIndex);

    // Marks this emergency checklist as completed.
    checklistCompleted[emergencyIndex] = true;
}

// Resets all five household preparedness checklists.
void Household::ResetHousehold()
{
    // Clears every checklist answer and completion flag.
    for (int i = 0; i < TOTAL_EMERGENCIES; i++)
    {
        checklistCompleted[i] = false;

        for (int j = 0; j < TOTAL_PREPARATIONS; j++)
        {
            preparations[i][j] = false;
        }
    }

    // Saves the cleared household information.
    SaveHousehold();

    std::cout << "Household preparedness checklists have been reset.\n";
}

// Saves household preparedness answers to a file.
void Household::SaveHousehold()
{
    {
        std::ofstream outFile("ReadyQuestHousehold.txt");

        if (outFile.is_open())
        {
            // Writes version 2 so the program recognizes the new format.
            outFile << 2 << "\n";

            // Saves all 25 preparation answers.
            for (int i = 0; i < TOTAL_EMERGENCIES; i++)
            {
                for (int j = 0; j < TOTAL_PREPARATIONS; j++)
                {
                    outFile << preparations[i][j] << "\n";
                }
            }

            // Saves the completion status of all five checklists.
            for (int i = 0; i < TOTAL_EMERGENCIES; i++)
            {
                outFile << checklistCompleted[i] << "\n";
            }

            outFile.close();
        }
    }
}

// Loads previously saved household preparedness answers.
void Household::LoadHousehold()
{
    std::ifstream inFile("ReadyQuestHousehold.txt");

    if (inFile.is_open())
    {
        int fileVersion = 0;

        inFile >> fileVersion;

        if (fileVersion == 2)
        {
            // Loads all 25 answers in the new format.
            for (int i = 0; i < TOTAL_EMERGENCIES; i++)
            {
                for (int j = 0; j < TOTAL_PREPARATIONS; j++)
                {
                    inFile >> preparations[i][j];
                }
            }

            // Loads all five checklist completion flags.
            for (int i = 0; i < TOTAL_EMERGENCIES; i++)
            {
                inFile >> checklistCompleted[i];
            }
        }
        else
        {
            // Loads the first answer from the older save format.
            preparations[POWER_OUTAGE][0] = (fileVersion != 0);

            // Loads the remaining four Power Outage answers.
            for (int i = 1; i < TOTAL_PREPARATIONS; i++)
            {
                inFile >> preparations[POWER_OUTAGE][i];
            }

            // Loads the old Power Outage completion flag.
            inFile >> checklistCompleted[POWER_OUTAGE];
        }

        inFile.close();

    }

}