#include "ProgressTracker.h"
#include <iostream>

// Set all progress values to zero when ReadyQuest starts.
ProgressTracker::ProgressTracker()
{
	totalPoints = 0;
	completedLessons = 0;
	completedScenarios = 0;
	correctScenarioDecisions = 0;

	// Start all achievements as not earned.
	firstLessonEarned = false;
	knowledgeChampionEarned = false;
	safeDecisionEarned = false;
	safetyExpertEarned = false;
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
void ProgressTracker::CompleteLesson(int score)
{
	completedLessons++;

	// Award the First Lesson achievement.
	if (completedLessons >= 1 && !firstLessonEarned)
	{
		firstLessonEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: First Lesson!\n";
		std::cout << "You completed your first emergency lesson.\n";
	}

	// Award Knowledge Champion for answering all 3 questions correctly.
	if (score == 3 && !knowledgeChampionEarned)
	{
		knowledgeChampionEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: Knowledge Champion!\n";
		std::cout << "You answered all 3 lesson questions correctly.\n";
	}
}

// Tracks completed scenarios and correct safety decisions.
void ProgressTracker::CompleteScenario(bool correct)
{
	completedScenarios++;

	// Count the decision only when the user chooses the safe answer.
	if (correct)
	{
		correctScenarioDecisions++;
	}

	// Award the Safe Decision achievement.
	if (correctScenarioDecisions >= 1 && !safeDecisionEarned)
	{
		safeDecisionEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: Safe Decision!\n";
		std::cout << "You made your first correct safety decision.\n";
	}

	// Award the Safety Expert achievement.
	if (correctScenarioDecisions >= 3 && !safetyExpertEarned)
	{
		safetyExpertEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: Safety Expert!\n";
		std::cout << "You made 3 correct safety decisions.\n";
	}
}

// Displays the user's current progress.
void ProgressTracker::DisplayProgress()
{
	std::cout << "\n===== ReadyQuest Progress =====\n";
	std::cout << "Total Points: " << totalPoints << "\n";
	std::cout << "Completed Lessons: " << completedLessons << "\n";
	std::cout << "Completed Scenarios: " << completedScenarios << "\n";

	std::cout << "\n===== Achievements =====\n";

	if (firstLessonEarned)
	{
		std::cout << "[EARNED] First Lesson\n";
	}

	if (knowledgeChampionEarned)
	{
		std::cout << "[EARNED] Knowledge Champion\n";
	}

	if (safeDecisionEarned)
	{
		std::cout << "[EARNED] Safe Decision\n";
	}

	if (safetyExpertEarned)
	{
		std::cout << "[EARNED] Safety Expert\n";
	}

	if (!firstLessonEarned && !knowledgeChampionEarned &&
		!safeDecisionEarned && !safetyExpertEarned)
	{
		std::cout << "No achievements earned yet.\n";
	}
}