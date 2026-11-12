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