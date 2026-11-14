
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

    case WATER_INTERRUPTION_EVENT:
    {
        std::cout << "WATER SUPPLY INTERRUPTION\n";
        std::cout << "Your home suddenly loses access to running water.\n";

        std::cout << "\nWhat should you do first?\n";
        std::cout << "1. Use bottled water stored for emergencies.\n";
        std::cout << "2. Drink water from an unknown outdoor source.\n";
        std::cout << "3. Assume the water will return immediately.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 1)
        {
            std::cout << "\nCorrect! Use your stored emergency water supply.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Use stored safe drinking water when available.\n";
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

    case WINTER_STORM_EVENT:
    {
        std::cout << "WINTER STORM\n";
        std::cout << "A winter storm is approaching your area.\n";

        std::cout << "\nWhat should you do to prepare?\n";
        std::cout << "1. Wait until the storm arrives to gather supplies.\n";
        std::cout << "2. Prepare food, water, warm clothing, and emergency supplies.\n";
        std::cout << "3. Travel during the storm to buy supplies.\n";

        int choice = Input::GetNumber(
            "Enter your choice (1-3): ", MIN_EVENT_CHOICE, MAX_EVENT_CHOICE);

        if (choice == 2)
        {
            std::cout << "\nCorrect! Prepare supplies before the storm arrives.\n";
        }
        else
        {
            std::cout << "\nThat is not the safest choice.\n";
            std::cout << "Prepare early and avoid unnecessary travel during severe weather.\n";
        }

        break;
    }
    }
}
