
#include "EmergencyEvent.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Input.h"
#include "Household.h"

// Stores a pointer to the existing Household object.
EmergencyEvent::EmergencyEvent(Household* householdPointer)
{
    household = householdPointer;

    // Starts the event counter at zero.
    eventsUsed = 0;

    // Loads the emergency event numbers.
    for (int i = 0; i < TOTAL_EVENTS; i++)
    {
        eventOrder[i] = i + FIRST_EVENT_NUMBER;
    }

    // Randomizes the first cycle.
    ShuffleEvents();
}

// Randomizes the order of the emergency events.
void EmergencyEvent::ShuffleEvents()
{
    // Checks each position in the event array.
    for (int i = TOTAL_EVENTS - 1; i > 0; i--)
    {
        // Selects a random position from the remaining events.
        int randomIndex = rand() % (i + 1);

        // Temporarily stores the current event.
        int temp = eventOrder[i];

        // Moves the randomly selected event into this position.
        eventOrder[i] = eventOrder[randomIndex];

        // Moves the original event into the random position.
        eventOrder[randomIndex] = temp;
    }
}

// Selects and displays a random emergency event.
void EmergencyEvent::DisplayRandomEvent()
{
    // Checks whether all events have been used.
    if (eventsUsed == TOTAL_EVENTS)
    {
        // Resets the counter for a new cycle.
        eventsUsed = 0;

        // Randomizes the next cycle.
        ShuffleEvents();
    }

    // Selects the next event in the randomized order.
    int eventNumber = eventOrder[eventsUsed];

    // Records that this event has been used.
    eventsUsed++;

    std::cout << "\n--- Random Emergency Event ---\n";

    // Displays the emergency based on the random number.
    switch (eventNumber)
    {
    case POWER_OUTAGE_EVENT:
    {
        std::cout << "POWER OUTAGE\n";
        std::cout << "The electricity in your home suddenly goes out.\n";

        // Checks the household flashlight information.
        if (household != nullptr)
        {
            if (household->HasFlashlights())
            {
                std::cout << "Your checklist confirms you have flashlights.\n";
            }
            else
            {
                std::cout << "Your checklist does not confirm that you have flashlights.\n";
            }
        }

        std::cout << "\nWhat should you do first?\n";
        std::cout << "1. Light candles and leave them unattended.\n";
        std::cout << "2. Get flashlights and check on everyone.\n";
        std::cout << "3. Open the refrigerator.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Flashlights are safer than open flames.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Use flashlights and check on everyone.\n";
        }

        break;
    }

    case TORNADO_EVENT:
    {
        std::cout << "TORNADO\n";
        std::cout << "A tornado warning has been issued for your area.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Go outside to watch the storm.\n";
        std::cout << "2. Move to a basement or interior room away from windows.\n";
        std::cout << "3. Stand near a window to watch for danger.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Move to a basement or small interior room.\n";
            std::cout << "Stay away from windows and protect your head.\n";
        }
        else
        {
            std::cout << "\nThat is not safe during a tornado warning.\n";
            std::cout << "Seek shelter in a basement or interior room away from windows.\n";
        }

        break;
    }

    case HURRICANE_EVENT:
    {
        std::cout << "HURRICANE\n";
        std::cout << "A hurricane warning has been issued for your area.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Ignore the warnings and wait for the storm.\n";
        std::cout << "2. Follow local instructions and evacuate if ordered.\n";
        std::cout << "3. Go outside to watch the storm.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Follow instructions from local officials.\n";
            std::cout << "Evacuate when ordered and use designated evacuation routes.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Follow local emergency instructions.\n";
            std::cout << "If you are not evacuating, shelter indoors away from windows.\n";
        }

        break;
    }


    case HOUSE_FIRE_EVENT:
    {
        std::cout << "HOUSE FIRE\n";
        std::cout << "Smoke is detected inside your home.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Try to collect your belongings.\n";
        std::cout << "2. Get everyone outside and call 911 from a safe location.\n";
        std::cout << "3. Hide inside a closet.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Get everyone out and call 911 from safety.\n";
        }
        else
        {
            std::cout << "\nThat is dangerous during a house fire.\n";
            std::cout << "Leave immediately. Do not stop to collect belongings.\n";
        }

        break;
    }

    case EARTHQUAKE_EVENT:
    {
        std::cout << "EARTHQUAKE\n";
        std::cout << "The ground suddenly begins shaking.\n";

        std::cout << "\nWhat should you do?\n";
        std::cout << "1. Run outside while the ground is shaking.\n";
        std::cout << "2. Drop, cover, and hold on.\n";
        std::cout << "3. Stand near a window.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Drop, cover, and hold on.\n";
            std::cout << "Protect your head and neck and stay away from windows.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Drop, cover, and hold on until the shaking stops.\n";
        }

        break;
    }
    }
}
