#pragma once


#ifndef HOUSEHOLD_H 
#define HOUSEHOLD_H

class Household
{
private:
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

    // Saves household preparedness answers.
    void SaveHousehold();

    // Loads previously saved household answers.
    void LoadHousehold();
};

#endif