#include "ReadyQuest.h"
#include <iostream>
#include "Lesson.h"
#include "Scenario.h"
#include "Household.h"
#include "Input.h"

// Defines the ReadyQuest constructor.
ReadyQuest::ReadyQuest()
	: emergencyEvent(&household)
{
	// Loads previously saved progress when ReadyQuest starts.
	progress.LoadProgress();

	// Loads previously saved household information.
	household.LoadHousehold();
}

// Defines the function that starts the application
void ReadyQuest::Run()
{
	int choice = 0;

	// Displays the ReadyQuest welcome logo when the program starts.
	std::cout << "\n";
	std::cout << "=====================================\n";
	std::cout << "  ____                 _         _   \n";
	std::cout << " |  _ \\ ___  __ _  __| |_   _  / \\  \n";
	std::cout << " | |_) / _ \\/ _` |/ _` | | | |/ _ \\ \n";
	std::cout << " |  _ <  __/ (_| | (_| | |_| / ___ \\\n";
	std::cout << " |_| \\_\\___|\\__,_|\\__,_|\\__, /_/   \\\n";
	std::cout << "                         |___/       \n";
	std::cout << "       HOUSEHOLD READINESS COACH     \n";
	std::cout << "=====================================\n\n";

	// Displays the ReadyQuest introduction once when the program starts.
	std::cout << "Welcome to ReadyQuest: Your Household Emergency Readiness Coach!\n\n";

	std::cout << "Being prepared for an emergency can help protect you, your family, and your home.\n";
	std::cout << "ReadyQuest is designed to help households learn how to recognize potential dangers,\n";
	std::cout << "make safer decisions, and prepare for unexpected emergencies.\n\n";

	std::cout << "With ReadyQuest, you can:\n";
	std::cout << "- Explore emergency preparedness lessons and learn what to do before, during, and after an emergency.\n";
	std::cout << "- Practice interactive scenarios that challenge you to make safe decisions.\n";
	std::cout << "- Review your household's preparedness and identify supplies and plans that need attention.\n";
	std::cout << "- Experience random emergency events to test your knowledge and readiness.\n";
	std::cout << "- Track your progress, earn points, and unlock achievements as you learn.\n\n";

	std::cout << "You don't have to know everything to get started.\n";
	std::cout << "ReadyQuest will help you build your knowledge one step at a time.\n\n";

	std::cout << "The main menu is next. Choose an option to begin your preparedness journey!\n\n";

	// Keep showing the menu until the user chooses Exit.
	while (choice != 6)
	{
		std::cout << "\n===== ReadyQuest =====\n";
		std::cout << "1. Emergency Lessons\n";
		std::cout << "2. Interactive Scenarios\n";
		std::cout << "3. Household Prepardness information\n";
		std::cout << "4. Progress and Achievements\n";
		std::cout << "5. Random Emergency Events\n";
		std::cout << "6 Exit\n";
		

		// Gets a valid menu selection from the user.
		choice = Input::GetNumber("Enter your choice: ", 1, 6);

		// Responds to the selected menu option.
		switch (choice)
		{
		case 1:
		{
			// Creates a lesson and displays its safety tips
			Lesson lesson;
			int lessonScore = lesson.Display();
			

			// Records the completed lesson.
			progress.CompleteLesson(lessonScore, "Power Outage");
			
			// Awards 5 points for each correct knowledge check answer.
			progress.AddPoints(lessonScore * 5);
			
			// Displays the points earned.
			std::cout << "You earned " << lessonScore * 5 << " points!\n";

			break;
		}

		case 2:
		{
			// Creates and displays an emergency scenario.
			Scenario scenario;
			int scenarioChoice = scenario.Display();

			// Records the completed scenario.
			if (scenarioChoice >= 1 && scenarioChoice <= 3)
			{
				progress.CompleteScenario(scenarioChoice == 2, "Power Outage Scenario");

				// Awards points for the safe decision.
				if (scenarioChoice == 2)
				{
					progress.AddPoints(20);
					std::cout << "You earned 20 points!\n";
				}

				// Deducts points for an unsafe decision.
				else
				{
					progress.SubtractPoints(5);
					std::cout << "You lost 5 points.\n";
				}
			}
			break;
		}
		case 3:
		{
			// Creates a household object and displays preparedness information.
			household.Display();
			break;
		}

		case 4:
			// Displays the user's current progress.
			progress.DisplayProgress();
			break;

		case 5:
			// Displays a randomly selected emergency event.
			emergencyEvent.DisplayRandomEvent();
			break;

		case 6:
			// Saves the user's progress before exiting.
			progress.SaveProgress();

			// Saves the household preparedness answers.
			household.SaveHousehold();

			std::cout << "Thank you for using ReadyQuest!\n";
			break;

		default:
			std::cout << "Invalid choice. Please enter a number from 1 to 5.\n";
			break;
		}
	}
}