#pragma once


#ifndef HOUSEHOLD_H 
#define HOUSEHOLD_H

class Household
{
private:
    // Number of preparedness items on the checklist.
    static const int TOTAL_PREPARATIONS = 5;

    // Checklist answer choices.
    static const int YES_CHOICE = 1;
    static const int NO_CHOICE = 2;

    // Stores whether each emergency supply is available.
    bool hasFlashlights;
    bool hasFoodAndWater;
    bool hasBlankets;
    bool hasEmergencyContacts;
    bool hasRadio;

    // Tracks whether the checklist has been completed.
    bool checklistCompleted;

public:
    // Creates a new Household object.
    Household();

    // Displays household preparedness information.
    void Display();

    // Calculates how many preparations are completed.
    int CalculatePreparedness();

    // Displays missing supplies and a household readiness summary.
    void DisplayPreparednessFeedback();
    
    // Checks whether the hosuehold has flashlights
    bool HasFlashlights();

    // Saves household preparedness answers.
    void SaveHousehold();

    // Loads previously saved household answers.
    void LoadHousehold();
};

#endif