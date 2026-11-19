#include "ReadyQuest.h"
#include <iostream>
#include "Lesson.h"
#include "Scenario.h"
#include "Household.h"
#include "Input.h"
#include "ConsoleColor.h"

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
	ConsoleColor::SetColor(ConsoleColor::RED);

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

	ConsoleColor::ResetColor();

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
	while (choice != EXIT_MENU_CHOICE)
	{
		// Displays the main menu in orange.
		ConsoleColor::SetColor(ConsoleColor::ORANGE);

		std::cout << "\n===== ReadyQuest =====\n";
		std::cout << "1. Emergency Lessons\n";
		std::cout << "2. Interactive Scenarios\n";
		std::cout << "3. Household Preparedness information\n";
		std::cout << "4. Progress and Achievements\n";
		std::cout << "5. Random Emergency Events\n";
		std::cout << "6. Exit\n";
		std::cout << "7. Reset Saved Progress\n";

		// Restores the default text color.
		ConsoleColor::ResetColor();


		// Gets a valid menu selection from the user.
		choice = Input::GetNumber("Enter your choice: ", MIN_MENU_CHOICE, MAX_MENU_CHOICE);

		// Responds to the selected menu option.
		switch (choice)
		{
		case 1:
		{
			// Creates a lesson and displays its safety tips
			Lesson lesson;
			int lessonScore = lesson.Display();
			

			// Records the completed lesson.
			progress.CompleteLesson(lessonScore, lesson.GetLessonName());
			
			// Awards 5 points for each correct knowledge check answer.
			progress.AddPoints(lessonScore * LESSON_POINTS_PER_ANSWER);
			
			// Displays the points earned in green.
			ConsoleColor::SetColor(ConsoleColor::GREEN);
			std::cout << "You earned " << lessonScore * LESSON_POINTS_PER_ANSWER << " points!\n";
			ConsoleColor::ResetColor();

			// Displays additional resources for the Completed lesson.
			lesson.DisplayResource();
			break;
		}

		case 2:
		{
			// Creates and displays an emergency scenario.
			Scenario scenario;
			int scenarioMenuChoice = 0;

			// Keeps the scenario menu open until the user exits.
			while (scenarioMenuChoice != 6)
			{
				scenarioMenuChoice = scenario.DisplayMenu();

				// Runs the selected emergency scenario.
				if (scenarioMenuChoice >= 1 && scenarioMenuChoice <= 5)
				{
					bool correct = scenario.Display(scenarioMenuChoice);

					// Records the scenario and whether the decision was safe.
					progress.CompleteScenario(
						correct, scenario.GetScenarioName(scenarioMenuChoice));

					// Awards points for a safe decision.
					if (correct)
					{
						progress.AddPoints(SCENARIO_SAFE_POINTS);

						ConsoleColor::SetColor(ConsoleColor::GREEN);
						std::cout << "You earned "
							<< SCENARIO_SAFE_POINTS << " points!\n";
						ConsoleColor::ResetColor();
					}
					// Deducts points for an unsafe decision.
					else
					{
						progress.SubtractPoints(SCENARIO_UNSAFE_PENALTY);

						ConsoleColor::SetColor(ConsoleColor::RED);
						std::cout << "You lost "
							<< SCENARIO_UNSAFE_PENALTY << " points.\n";
						ConsoleColor::ResetColor();
					}
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

		case 7:
		{
			// Asks the user to confirm before resetting saved information.
			int resetChoice = Input::GetNumber(
				"\nAre you sure you want to erase all saved progress and household information?\n"
				"1. Yes, start a new game\n"
				"2. No, keep my saved information\n"
				"Enter your choice: ", 1, 2);

			if (resetChoice == 1)
			{
				// Resets progress and household preparedness information.
				progress.ResetProgress();
				household.ResetHousehold();
			}
			else
			{
				std::cout << "Reset canceled. Your saved information was kept.\n";
			}

			break;
		}

		case EXIT_MENU_CHOICE:
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