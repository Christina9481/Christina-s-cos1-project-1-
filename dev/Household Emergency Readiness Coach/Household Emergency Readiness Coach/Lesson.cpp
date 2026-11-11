#include "Lesson.h"
#include <iostream>
#include "Input.h"



//Defines the Lesson constructor.
Lesson::Lesson()
{

}

// Displays the preparation steps before a power outage.
void Lesson::DisplayBeforeOutage()
{
    std::cout << "\n===== BEFORE THE POWER OUTAGE =====\n";

    std::cout << "1. Keep flashlights and extra batteries available.\n";
    std::cout << "2. Store drinking water and nonperishable food.\n";
    std::cout << "3. Keep extra blankets available for warmth.\n";
    std::cout << "4. Keep emergency contacts accessible.\n";
    std::cout << "5. Have a battery-powered radio available.\n";
}

// Displays safety steps during a power outage.
void Lesson::DisplayDuringOutage()
{
    std::cout << "\n===== DURING THE POWER OUTAGE =====\n";

    std::cout << "1. Check whether the outage affects your neighborhood.\n";
    std::cout << "2. Use flashlights instead of candles.\n";
    std::cout << "3. Keep refrigerator and freezer doors closed.\n";
    std::cout << "4. Unplug sensitive electronics to protect them from power surges.\n";
    std::cout << "5. Never operate a generator inside your home or garage.\n";
    std::cout << "   Keep generators at least 20 feet from the home.\n";
}

// Displays recovery steps after electricity returns.
void Lesson::DisplayAfterOutage()
{
    std::cout << "\n===== AFTER THE POWER OUTAGE =====\n";

    std::cout << "1. Check refrigerated food for safety.\n";
    std::cout << "2. Discard perishable food that has been above 40 degrees F for more than 2 hours.\n";
    std::cout << "3. Turn appliances back on safely.\n";
    std::cout << "4. Restock emergency supplies.\n";
    std::cout << "5. Check flashlights and replace used batteries.\n";
}

// Tests the user's understanding of power outage safety.
int Lesson::KnowledgeCheck()
{
    int answer = 0;
    int score = 0;

    std::cout << "\n===== POWER OUTAGE KNOWLEDGE CHECK =====\n";

    // Question 1
    std::cout << "\n1. What should you use for lighting during a power outage?\n";
    std::cout << "1. Candles\n";
    std::cout << "2. Flashlights\n";
    std::cout << "3. Matches\n";
    

    answer = Input::GetNumber("Choose 1-3: ", 1, 3);

    if (answer == 2)
    {
        std::cout << "Correct! Flashlights reduce fire risk.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Flashlights are the safest.\n";
    }

    // Question 2
    std::cout << "\n2. Where should you operate a generator?\n";
    std::cout << "1. Inside the garage\n";
    std::cout << "2. Inside the house\n";
    std::cout << "3. Outdoors, at least 20 feet from the home\n";
   

    answer = Input::GetNumber("Choose 1-3: ", 1, 3);

    if (answer == 3)
    {
        std::cout << "Correct! This helps prevent carbon monoxide poisoning.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Generators must operate outdoors, away from the home.\n";
    }

    // Question 3
    std::cout << "\n3. What should you do with refrigerator doors during an outage?\n";
    std::cout << "1. Keep them closed as much as possible\n";
    std::cout << "2. Open them every few minutes\n";
    std::cout << "3. Leave them open\n";
   

    answer = Input::GetNumber("Choose 1-3: ", 1, 3);

    if (answer == 1)
    {
        std::cout << "Correct! Keeping the doors closed helps preserve food.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Keep refrigerator and freezer doors closed.\n";
    }

    // Display the final knowledge check score.
    std::cout << "\nYour knowledge check score: " << score << " out of 3.\n";

    // Returns the number of correct answers.
    return score;
}

// Walks the user through all three lesson sections in order.
int Lesson::Display()
{
    std::cout << "\n===== EMERGENCY LESSON: POWER OUTAGE =====\n";

    DisplayBeforeOutage();
    DisplayDuringOutage();
    DisplayAfterOutage();

    // Runs the knowledge check and stores its score.
    int score = KnowledgeCheck();

    std::cout << "\nYou have completed the Power Outage lesson!\n";

    // Sends the score back to ReadyQuest.
    return score;
  
}
