#include "Lesson.h"
#include <iostream>


//Defines the Lesson constructor.
// This runs when a Lesson object is created.

Lesson::Lesson()
{

}

// Displays an emergency preparedness lesson.
void Lesson::Display()
{
	std::cout << "\n===== Emergency lesson: Power Outages ====\n";
	std::cout << "1. Keep flashlights and extra batteries available.\n";
	std::cout << "2. Keep drinking water and nonperishable food on hand.\n";
	std::cout << "3. Keep extra blankets and pillows available to stay warm.\n";
	std::cout << "4. Never run a generator inside your home or garage.\n";
	std::cout << "5. Keep the refrigerators and freezers closed when possible.\n";
	std::cout << " \nBeing prepared helps keep your household safe.\n";
}