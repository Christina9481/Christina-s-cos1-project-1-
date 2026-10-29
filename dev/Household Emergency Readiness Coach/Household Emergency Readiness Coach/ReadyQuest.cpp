#include "ReadyQuest.h"
#include <iostream>

// Defines the ReadyQuest constructor.
ReadyQuest::ReadyQuest()
{

}

// Defines the function that starts the application
void ReadyQuest::Run()
{
	int choice = 0;

	// Keep showing the menu until the user chooses Exit.
	while (choice != 5)
	{
		std::cout << "\n===== ReadyQuest =====\n";
		std::cout << "1. Emergency Lessons\n";
		std::cout << "2. Interactive Scenarios\n";
		std::cout << "3. Household Prepardness information\n";
		std::cout << "4. Progress and Achievements\n";
		std::cout << "5. Exit\n";
		std::cout << " Enter your choice: ";

		std::cin >> choice;

		// Responds to the selected menu option.
		switch (choice)
		{
		case 1:
			std::cout << "Emergency Lessons selected.\n";
			break;

		case 2:
			std::cout << "Interactive Scenarios selected.\n";
			break;

		case 3:
			std::cout << "Household Preparedness Information selected.\n";
			break;

		case 4:
			std::cout << "Progress and Achievements selected.\n";
			break;

		case 5:
			std::cout << "Thank you for using ReadyQuest!\n";
			break;

		default:
			std::cout << "Invalid choice. Please enter a number from 1 to 5.\n";
			break;
		}
	}
}