#pragma once


#ifndef HOUSEHOLD_H 
#define HOUSEHOLD_H

class Household
{
private:
    // Number of emergencies and preparations per checklist.
    static const int TOTAL_PREPARATIONS = 5;
    static const int TOTAL_EMERGENCIES = 5;

    // Emergency checcklist positions.
    static const int POWER_OUTAGE = 0;
    static const int TORNADO = 1;
    static const int HURRICANE = 2;
    static const int HOUSE_FIRE = 3;
    static const int EARTHQUAKE = 4;

    // Checklist answer choices.
    static const int YES_CHOICE = 1;
    static const int NO_CHOICE = 2;

   // Stores the preparedness answers for all five emergencies.
    bool preparations[TOTAL_EMERGENCIES][TOTAL_PREPARATIONS];

    // Tracks whether the checklist has been completed.
    bool checklistCompleted[TOTAL_EMERGENCIES];

public:
    // Creates a new Household object.
    Household();

    // Displays household preparedness information.
    void Display();

    // Calculates how many preparations are completed.
    int CalculatePreparedness(int emergencyIndex);

    // Displays missing supplies and a household readiness summary.
    void DisplayPreparednessFeedback(int emergencyIndex);
    
    // Checks whether the hosuehold has flashlights
    bool HasFlashlights();

    // Resets all household preparedness checklists.
    void ResetHousehold();

    // Saves household preparedness answers.
    void SaveHousehold();

    // Loads previously saved household answers.
    void LoadHousehold();
};

#endif