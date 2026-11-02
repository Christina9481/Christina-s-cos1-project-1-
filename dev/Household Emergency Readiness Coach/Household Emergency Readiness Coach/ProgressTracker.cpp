#include "ProgressTracker.h"
#include <iostream>

// Set all progress values to zero when ReadyQuest starts.
ProgressTracker::ProgressTracker()
{
	totalPoints = 0;
	completedLessons = 0;
	completedScenarios = 0;
}

// Adding points earned by the user.
void ProgressTracker::AddPoints(int points)
{
	if (points > 0)
	{
		totalPoints += points;
	}
}

// Subtracts points when the user makes an unsafe decision
void ProgressTracker::SubtractPoints(int points)
{
	if (points > 0)
	{
		totalPoints -= points;
	}
}



// Increases the completed lesson count.
void ProgressTracker::CompleteLesson()
{
	completedLessons++;
}


// Increases the completed scenario count.
void ProgressTracker::CompleteScenario()
{
	completedScenarios++;
}

// Displays the user's current progress.
void ProgressTracker::DisplayProgress()
{
	std::cout << "\n===== ReadyQuest Progress =====\n";
	std::cout << "Total Points: " << totalPoints << "\n";
	std::cout << "Completed Lessons: " << completedLessons << "\n";
	std::cout << "Completed Scenarios: " << completedScenarios << "\n";
}