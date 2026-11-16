#include "Lesson.h"
#include <iostream>
#include "Input.h"



//Defines the Lesson constructor.
Lesson::Lesson()
{
    // Sets the default lesson name.
    lessonName = "Power Outage";
}

// Retruns the name of the selected lesson.
std::string Lesson::GetLessonName()
{
    return lessonName;
}


// Displays the tornado safety lesson.
int Lesson::DisplayTornadoLesson()
{
    int answer = 0;
    int score = 0;

    std::cout << "\n===== TORNADO SAFETY LESSON =====\n";

    // Introduces tornadoes and explains how to recognize them.
    std::cout << "\nTornadoes are powerful, rotating columns of air that extend from thunderstorms to the ground.\n";
    std::cout << "They can destroy buildings, uproot trees, and send dangerous debris flying.\n";
    std::cout << "Knowing how to prepare and where to find shelter can help protect you and your household.\n";
    std::cout << "A tornado may appear as a rotating, funnel-shaped cloud, but sometimes it is hidden by rain or darkness, and swirling debris near the ground may be the only visible clue.\n";

    // Displays preparation steps before a tornado.
    std::cout << "\n===== BEFORE A TORNADO =====\n";
    std::cout << "1. Identify a basement or interior room on the lowest floor.\n";
    std::cout << "2. Sign up for local emergency weather alerts.\n";
    std::cout << "3. Keep a battery-powered weather radio available.\n";
    std::cout << "4. Prepare emergency supplies, including food, water, and medications.\n";
    std::cout << "5. Include supplies for pets and family members with special needs.\n";
    std::cout << "6. Create a household emergency communication plan.\n";
    std::cout << "7. Practice tornado drills with everyone in your household.\n";
    std::cout << "8. If you live in a mobile home, identify a nearby sturdy shelter.\n";

    // Displays safety steps during a tornado.
    std::cout << "\n===== DURING A TORNADO =====\n";
    std::cout << "1. Seek shelter immediately when a tornado warning is issued.\n";
    std::cout << "2. Go to a basement, storm shelter, or small interior room on the lowest floor.\n";
    std::cout << "3. Stay away from windows and exterior walls.\n";
    std::cout << "4. Protect your head and neck with your arms.\n";
    std::cout << "5. Use sturdy furniture, blankets, or cushions for extra protection.\n";
    std::cout << "6. Do not seek shelter underneath an overpass or bridge.\n";
    std::cout << "7. Continue listening for official weather updates.\n";

    // Displays safety steps after a tornado.
    std::cout << "\n===== AFTER A TORNADO =====\n";
    std::cout << "1. Check yourself and others for injuries.\n";
    std::cout << "2. Stay away from fallen power lines and damaged utility lines.\n";
    std::cout << "3. Do not enter damaged buildings until authorities say they are safe.\n";
    std::cout << "4. Continue listening for emergency updates and instructions.\n";
    std::cout << "5. Contact family members to let them know you are safe.\n";
    std::cout << "6. Wear sturdy shoes, long clothing, and gloves during cleanup.\n";
    std::cout << "7. Check on neighbors when it is safe to do so.\n";

    // Tests the user's understanding of tornado safety.
    std::cout << "\n===== TORNADO KNOWLEDGE CHECK =====\n";

    // Question 1
    std::cout << "\n1. Where should you shelter during a tornado warning?\n";
    std::cout << "1. Near a window.\n";
    std::cout << "2. In a basement or interior room on the lowest floor.\n";
    std::cout << "3. Outside on a porch.\n";

    answer = Input::GetNumber(
        "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == TORNADO_QUESTION_ONE_ANSWER)
    {
        std::cout << "Correct! Interior shelter away from windows offers better protection.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Seek shelter in a basement or interior room on the lowest floor.\n";
    }

    // Question 2
    std::cout << "\n2. What should someone in a mobile home do before tornado season?\n";
    std::cout << "1. Plan to stay inside the mobile home.\n";
    std::cout << "2. Wait until the tornado arrives to find shelter.\n";
    std::cout << "3. Identify a nearby sturdy building or storm shelter.\n";

    answer = Input::GetNumber(
        "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == TORNADO_QUESTION_TWO_ANSWER)
    {
        std::cout << "Correct! Mobile homes do not provide reliable tornado shelter.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Identify a sturdy shelter before severe weather threatens.\n";
    }

    // Question 3
    std::cout << "\n3. What should you avoid after a tornado?\n";
    std::cout << "1. Listening to weather updates.\n";
    std::cout << "2. Fallen power lines and damaged buildings.\n";
    std::cout << "3. Contacting family members.\n";

    answer = Input::GetNumber(
        "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == TORNADO_QUESTION_THREE_ANSWER)
    {
        std::cout << "Correct! Fallen power lines and damaged buildings are dangerous.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Stay away from fallen power lines and damaged buildings.\n";
    }

    // Displays the final knowledge check score.
    std::cout << "\nYour knowledge check score: "
        << score << " out of " << TOTAL_QUESTIONS << ".\n";

    // Provides an official resource for additional tornado safety information.
    std::cout << "\n===== WANT TO LEARN MORE? =====\n";
    std::cout << "Visit the National Weather Service - Tornado Safety.\n";
    std::cout << "Website: https://www.weather.gov/safety/tornado\n";

    // Returns the number of correct answers.
    return score;
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
    

    answer = Input::GetNumber("Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == QUESTION_ONE_ANSWER)
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
   

    answer = Input::GetNumber("Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == QUESTION_TWO_ANSWER)
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
   

    answer = Input::GetNumber("Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

    if (answer == QUESTION_THREE_ANSWER)
    {
        std::cout << "Correct! Keeping the doors closed helps preserve food.\n";
        score++;
    }
    else
    {
        std::cout << "Incorrect. Keep refrigerator and freezer doors closed.\n";
    }

    // Display the final knowledge check score.
    std::cout << "\nYour knowledge check score: " << score << " out of " << TOTAL_QUESTIONS << ".\n";

    // Returns the number of correct answers.
    return score;
}

// Displays the emergency lesson selection menu.
int Lesson::Display()
{
    int lessonChoice = 0;

    std::cout << "\n===== EMERGENCY LESSONS =====\n";
    std::cout << "1. Power Outage\n";
    std::cout << "2. Tornado Safety\n";

    // Gets the user's lesson selection.
    lessonChoice = Input::GetNumber(
        "Choose a lesson (1-2): ",
        MIN_LESSON_CHOICE,
        MAX_LESSON_CHOICE);

    // Displays the Power Outage lesson.
    if (lessonChoice == 1)
    {
        lessonName = "Power Outage";

        std::cout << "\n===== EMERGENCY LESSON: POWER OUTAGE =====\n";

        DisplayBeforeOutage();
        DisplayDuringOutage();
        DisplayAfterOutage();

        int score = KnowledgeCheck();

        std::cout << "\nYou have completed the Power Outage lesson!\n";

        return score;
    }

    // Displays the Tornado Safety lesson.
    else
    {
        lessonName = "Tornado Safety";

        int score = DisplayTornadoLesson();

        std::cout << "\nYou have completed the Tornado Safety lesson!\n";

        return score;
    }
}