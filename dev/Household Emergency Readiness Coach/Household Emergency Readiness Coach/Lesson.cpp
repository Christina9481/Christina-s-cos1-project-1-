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

    // Returns the number of correct answers.
    return score;
}


// Displays the preparation steps before a power outage.
void Lesson::DisplayBeforeOutage()
{

    // Introduces power outages and explains common causes.
    std::cout << "\nA power outage occurs when electricity stops flowing to homes and businesses.\n";
    std::cout << "Outages can happen because of severe weather, damaged power lines, or equipment failures.\n";
    std::cout << "Without electricity, households may lose lighting, heating, cooling, and access to important appliances.\n";
    std::cout << "Knowing how to prepare and respond can help keep your household safe.\n";

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
    int score = 0;
    int lessonChoice = 0;

    std::cout << "\n===== EMERGENCY LESSONS =====\n";
    std::cout << "1. Power Outage\n";
    std::cout << "2. Tornado Safety\n";
    std::cout << "3. Hurricane Safety\n";
    std::cout << "4. House Fire Safety\n";
    std::cout << "5. Earthquake Safety\n";

    // Gets the user's lesson selection.
    lessonChoice = Input::GetNumber(
        "Choose a lesson (1-5): ",
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

        score = KnowledgeCheck();

        std::cout << "\nYou have completed the Power Outage lesson!\n";

        return score;
    }

    // Displays the Tornado Safety lesson.
    else if (lessonChoice == 2)
    {
        lessonName = "Tornado Safety";

        score = DisplayTornadoLesson();

        std::cout << "\nYou have completed the Tornado Safety lesson!\n";

        return score;
    }

    // Displays the Hurricane Safety lesson.
    else if (lessonChoice == 3)
    {
        lessonName = "Hurricane Safety";

        score = DisplayHurricaneLesson();

        std::cout << "\nYou have completed the Hurricane Safety lesson!\n";

        return score;
    }

    // Displays the House Fire Safety lesson.
    else if (lessonChoice == 4)
    {
        lessonName = "House Fire Safety";
        score = DisplayHouseFireLesson();

        std::cout << "\nYou have completed the House Fire Safety lesson!\n";
    }
    else
    {
        lessonName = "Earthquake Safety";
        score = DisplayEarthquakeLesson();

        std::cout << "\nYou have completed the Earthquake Safety lesson!\n";
    }

    return score;
}


     // Displays the Hurricane Safety lesson.
     int Lesson::DisplayHurricaneLesson()
     {
         int answer = 0;
         int score = 0;

         std::cout << "\n===== HURRICANE SAFETY LESSON =====\n";

         // Introduces hurricanes and explains how to recognize them.
         std::cout << "\nHurricanes are powerful tropical storms that form over warm ocean water.\n";
         std::cout << "They can bring strong winds, heavy rain, flooding, and dangerous storm surges.\n";
         std::cout << "Hurricane conditions may include dark skies, strong winds, heavy rainfall, and rising water.\n";
         std::cout << "Weather alerts help people know when a hurricane may threaten their area.\n";

         // Displays preparation steps before a hurricane.
         std::cout << "\n===== BEFORE A HURRICANE =====\n";
         std::cout << "1. Monitor weather forecasts and emergency alerts.\n";
         std::cout << "2. Prepare an emergency kit with food, water, medications, and supplies.\n";
         std::cout << "3. Make a household communication and evacuation plan.\n";
         std::cout << "4. Know your area's evacuation routes and shelter locations.\n";
         std::cout << "5. Bring outdoor furniture and loose items inside when it is safe.\n";
         std::cout << "6. Protect important documents in a waterproof container.\n";
         std::cout << "7. Follow evacuation instructions from local officials.\n";

         // Displays safety steps during a hurricane.
         std::cout << "\n===== DURING A HURRICANE =====\n";
         std::cout << "1. Stay indoors and away from windows and glass doors.\n";
         std::cout << "2. Move to a small interior room on the lowest safe floor.\n";
         std::cout << "3. Keep listening to official weather and emergency updates.\n";
         std::cout << "4. Do not go outside during the storm's eye; dangerous winds may return.\n";
         std::cout << "5. Never walk or drive through floodwater.\n";
         std::cout << "6. Use flashlights instead of candles if the power goes out.\n";

         // Displays safety steps after a hurricane.
         std::cout << "\n===== AFTER A HURRICANE =====\n";
         std::cout << "1. Wait for officials to say it is safe before returning home.\n";
         std::cout << "2. Stay away from floodwater and downed power lines.\n";
         std::cout << "3. Avoid damaged buildings and report dangerous conditions.\n";
         std::cout << "4. Use safe drinking water and follow local health advisories.\n";
         std::cout << "5. Check household members and neighbors when it is safe.\n";
         std::cout << "6. Take photos of property damage for insurance records when safe.\n";

         // Tests the user's understanding of hurricane safety.
         std::cout << "\n===== HURRICANE KNOWLEDGE CHECK =====\n";

         // Question 1
         std::cout << "\n1. What should you do when local officials order an evacuation?\n";
         std::cout << "1. Ignore the order and stay home.\n";
         std::cout << "2. Follow the evacuation instructions and leave safely.\n";
         std::cout << "3. Wait until floodwater reaches your home.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HURRICANE_QUESTION_ONE_ANSWER)
         {
             std::cout << "Correct! Follow evacuation instructions from local officials.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Follow evacuation instructions and leave safely.\n";
         }

         // Question 2
         std::cout << "\n2. Where should you stay during a hurricane if you are sheltering at home?\n";
         std::cout << "1. Near windows to watch the storm.\n";
         std::cout << "2. Outside under a covered porch.\n";
         std::cout << "3. In a small interior room away from windows.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HURRICANE_QUESTION_TWO_ANSWER)
         {
             std::cout << "Correct! An interior room away from windows is safer.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Stay in a small interior room away from windows.\n";
         }

         // Question 3
         std::cout << "\n3. What should you avoid after a hurricane?\n";
         std::cout << "1. Walking or driving through floodwater.\n";
         std::cout << "2. Listening to emergency updates.\n";
         std::cout << "3. Checking on family members when it is safe.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HURRICANE_QUESTION_THREE_ANSWER)
         {
             std::cout << "Correct! Floodwater can hide dangerous hazards.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Never walk or drive through floodwater.\n";
         }

         // Displays the final knowledge check score.
         std::cout << "\nYour knowledge check score: "
             << score << " out of " << TOTAL_QUESTIONS << ".\n";

         // Returns the number of correct answers.
         return score;
     }

     // Displays the House Fire Safety lesson.
     int Lesson::DisplayHouseFireLesson()
     {
         int answer = 0;
         int score = 0;

         std::cout << "\n===== HOUSE FIRE SAFETY LESSON =====\n";

         // Introduces house fires and explains how to recognize them.
         std::cout << "\nHouse fires can spread quickly and create dangerous smoke and heat.\n";
         std::cout << "Common causes include unattended cooking, heating equipment, candles, and electrical problems.\n";
         std::cout << "Smoke alarms provide an early warning. Smoke, flames, unusual heat, or a burning smell may indicate a fire.\n";
         std::cout << "Knowing how to prevent fires and escape safely can help protect your household.\n";

         // Displays preparation steps before a house fire.
         std::cout << "\n===== BEFORE A HOUSE FIRE =====\n";
         std::cout << "1. Install smoke alarms inside and outside sleeping areas and on every level.\n";
         std::cout << "2. Test smoke alarms regularly and replace batteries when needed.\n";
         std::cout << "3. Create a household fire escape plan with two ways out of each room when possible.\n";
         std::cout << "4. Choose an outdoor meeting place a safe distance from the home.\n";
         std::cout << "5. Practice fire escape drills with everyone in the household.\n";
         std::cout << "6. Keep matches and lighters away from children.\n";
         std::cout << "7. Never leave cooking unattended.\n";
         std::cout << "8. Keep heaters away from furniture, curtains, and other items that can burn.\n";

         // Displays safety steps during a house fire.
         std::cout << "\n===== DURING A HOUSE FIRE =====\n";
         std::cout << "1. Get everyone outside immediately when there is a fire.\n";
         std::cout << "2. Stay low under smoke while escaping.\n";
         std::cout << "3. Feel a closed door with the back of your hand before opening it.\n";
         std::cout << "4. Use another exit if a door feels hot or smoke is coming through it.\n";
         std::cout << "5. Close doors behind you if possible to slow the spread of fire.\n";
         std::cout << "6. Call 911 from outside the home.\n";
         std::cout << "7. Never go back inside a burning building.\n";
         std::cout << "8. If your clothes catch fire, stop, drop, and roll.\n";

         // Displays safety steps after a house fire.
         std::cout << "\n===== AFTER A HOUSE FIRE =====\n";
         std::cout << "1. Stay outside and wait for firefighters to say it is safe to return.\n";
         std::cout << "2. Get medical help for anyone who is injured or may have inhaled smoke.\n";
         std::cout << "3. Do not turn utilities back on until authorities say it is safe.\n";
         std::cout << "4. Contact your insurance company when it is safe to do so.\n";
         std::cout << "5. Avoid damaged areas and follow instructions from emergency officials.\n";
         std::cout << "6. Replace smoke alarms that were damaged by the fire.\n";

         // Tests the user's understanding of house fire safety.
         std::cout << "\n===== HOUSE FIRE KNOWLEDGE CHECK =====\n";

         // Question 1
         std::cout << "\n1. What should you do when a house fire starts?\n";
         std::cout << "1. Hide in a closet.\n";
         std::cout << "2. Get everyone outside immediately.\n";
         std::cout << "3. Try to collect your belongings.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HOUSE_FIRE_QUESTION_ONE_ANSWER)
         {
             std::cout << "Correct! Getting outside quickly is the priority.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Get everyone outside immediately.\n";
         }

         // Question 2
         std::cout << "\n2. What should you do if smoke fills a room while escaping?\n";
         std::cout << "1. Stay low and crawl under the smoke.\n";
         std::cout << "2. Stand up and run through the smoke.\n";
         std::cout << "3. Hide under a bed.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HOUSE_FIRE_QUESTION_TWO_ANSWER)
         {
             std::cout << "Correct! Staying low helps you avoid some of the smoke.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Stay low and crawl under the smoke while escaping.\n";
         }

         // Question 3
         std::cout << "\n3. What should you do after escaping a burning home?\n";
         std::cout << "1. Go back inside for belongings.\n";
         std::cout << "2. Wait near the building entrance.\n";
         std::cout << "3. Stay outside and call 911.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == HOUSE_FIRE_QUESTION_THREE_ANSWER)
         {
             std::cout << "Correct! Stay outside and call 911.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Stay outside and call 911. Never re-enter the building.\n";
         }

         // Displays the final knowledge check score.
         std::cout << "\nYour knowledge check score: "
             << score << " out of " << TOTAL_QUESTIONS << ".\n";

         // Returns the number of correct answers.
         return score;
     }

     // Displays the Earthquake Safety lesson.
     int Lesson::DisplayEarthquakeLesson()
     {
         int answer = 0;
         int score = 0;

         std::cout << "\n===== EARTHQUAKE SAFETY LESSON =====\n";

         // Introduces earthquakes and explains common dangers.
         std::cout << "\nEarthquakes happen when energy is released beneath the Earth's surface.\n";
         std::cout << "They can cause buildings to shake, objects to fall, and roads to crack.\n";
         std::cout << "Strong earthquakes can damage buildings, utilities, and roads.\n";
         std::cout << "Preparing ahead of time helps protect your household.\n";

         // Displays preparation steps before an earthquake.
         std::cout << "\n===== BEFORE AN EARTHQUAKE =====\n";
         std::cout << "1. Secure heavy furniture, televisions, and bookcases to walls.\n";
         std::cout << "2. Prepare an emergency kit with food, water, medications, and supplies.\n";
         std::cout << "3. Identify safe places under sturdy tables or desks.\n";
         std::cout << "4. Practice Drop, Cover, and Hold On with your household.\n";
         std::cout << "5. Learn how to turn off gas, water, and electricity if necessary.\n";
         std::cout << "6. Keep flashlights, batteries, and a first aid kit available.\n";

         // Displays safety steps during an earthquake.
         std::cout << "\n===== DURING AN EARTHQUAKE =====\n";
         std::cout << "1. Drop to your hands and knees.\n";
         std::cout << "2. Cover your head and neck under a sturdy table or desk.\n";
         std::cout << "3. Hold On until the shaking stops.\n";
         std::cout << "4. Stay away from windows and objects that could fall.\n";
         std::cout << "5. If outside, move away from buildings, trees, and power lines.\n";
         std::cout << "6. If driving, pull over safely and stay inside your vehicle.\n";

         // Displays recovery steps after an earthquake.
         std::cout << "\n===== AFTER AN EARTHQUAKE =====\n";
         std::cout << "1. Check yourself and others for injuries.\n";
         std::cout << "2. Be prepared for aftershocks and Drop, Cover, and Hold On again.\n";
         std::cout << "3. Stay out of damaged buildings.\n";
         std::cout << "4. Stay away from downed power lines and damaged utilities.\n";
         std::cout << "5. Follow instructions from local emergency officials.\n";
         std::cout << "6. Contact emergency services if someone needs immediate help.\n";

         // Tests the user's understanding of earthquake safety.
         std::cout << "\n===== EARTHQUAKE KNOWLEDGE CHECK =====\n";

         // Question 1
         std::cout << "\n1. What should you do when an earthquake begins?\n";
         std::cout << "1. Run outside immediately.\n";
         std::cout << "2. Drop, Cover, and Hold On.\n";
         std::cout << "3. Stand near a window.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == EARTHQUAKE_QUESTION_ONE_ANSWER)
         {
             std::cout << "Correct! Drop, Cover, and Hold On helps protect you.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Drop, Cover, and Hold On is the recommended action.\n";
         }

         // Question 2
         std::cout << "\n2. What should you do before an earthquake?\n";
         std::cout << "1. Secure heavy furniture and prepare emergency supplies.\n";
         std::cout << "2. Place heavy objects on high shelves.\n";
         std::cout << "3. Ignore emergency preparations.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == EARTHQUAKE_QUESTION_TWO_ANSWER)
         {
             std::cout << "Correct! Securing furniture and preparing supplies improves safety.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Secure heavy furniture and prepare emergency supplies.\n";
         }

         // Question 3
         std::cout << "\n3. What should you do after an earthquake?\n";
         std::cout << "1. Enter damaged buildings to inspect them.\n";
         std::cout << "2. Stand near damaged power lines.\n";
         std::cout << "3. Stay out of damaged buildings and watch for aftershocks.\n";

         answer = Input::GetNumber(
             "Choose 1-3: ", MIN_ANSWER_CHOICE, MAX_ANSWER_CHOICE);

         if (answer == EARTHQUAKE_QUESTION_THREE_ANSWER)
         {
             std::cout << "Correct! Avoid damaged buildings and prepare for aftershocks.\n";
             score++;
         }
         else
         {
             std::cout << "Incorrect. Stay out of damaged buildings and watch for aftershocks.\n";
         }

         // Displays the final knowledge check score.
         std::cout << "\nYour knowledge check score: "
             << score << " out of " << TOTAL_QUESTIONS << ".\n";

         return score;
     }

    
     // Displays additional resources for the completed lesson.
     void Lesson::DisplayResource()
     {
         std::cout << "\n===== WANT TO LEARN MORE? =====\n";

         if (lessonName == "Power Outage")
         {
             std::cout << "Visit Ready.gov - Power Outages.\n";
             std::cout << "Website: https://www.ready.gov/power-outages\n";
         }
         else if (lessonName == "Tornado Safety")
         {
             std::cout << "Visit the National Weather Service - Tornado Safety.\n";
             std::cout << "Website: https://www.weather.gov/safety/tornado\n";
         }
         else if (lessonName == "Hurricane Safety")
         {
             std::cout << "Visit the National Weather Service - Hurricane Safety.\n";
             std::cout << "Website: https://www.weather.gov/safety/hurricane\n";
         }
         else if (lessonName == "House Fire Safety")
         {
             std::cout << "Visit the National Fire Protection Association - Home Fire Safety.\n";
             std::cout << "Website: https://www.nfpa.org/education-and-research/home-fire-safety\n";
         }
         else if (lessonName == "Earthquake Safety")
         {
             std::cout << "Visit Ready.gov - Earthquakes.\n";
             std::cout << "Website: https://www.ready.gov/earthquakes\n";
         }
         else
         {
             std::cout << "No additional resources are available.\n";
         }
     }


        
   


