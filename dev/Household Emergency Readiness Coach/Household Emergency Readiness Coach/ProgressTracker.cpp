#include "ProgressTracker.h"
#include <iostream>
#include <fstream>
#include <limits>

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
void ProgressTracker::CompleteLesson(int score, std::string lessonName)
{
	completedLessons++;

	// Save the name of the completed lesson.
	completedLessonNames.push_back(lessonName);

	// Award the First Lesson achievement.
	if (completedLessons >= FIRST_LESSON_REQUIREMENT && !firstLessonEarned)

	{
		firstLessonEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: First Lesson!\n";
		std::cout << "You completed your first emergency lesson.\n";
	}

	// Award Knowledge Champion for answering all 3 questions correctly.
	if (score == KNOWLEDGE_CHAMPION_REQUIREMENT && !knowledgeChampionEarned)
	{
		knowledgeChampionEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: Knowledge Champion!\n";
		std::cout << "You answered all 3 lesson questions correctly.\n";
	}
}

// Tracks completed scenarios and correct safety decisions.
void ProgressTracker::CompleteScenario(bool correct, std::string scenarioName)
{
	completedScenarios++;

	// Save the name of the completed scenario.
	completedScenarioNames.push_back(scenarioName);

	// Count the decision only when the user chooses the safe answer.
	if (correct)
	{
		correctScenarioDecisions++;
	}

	// Award the Safe Decision achievement.
	if (correctScenarioDecisions >= FIRST_SAFE_DECISION_REQUIREMENT && !safeDecisionEarned)
	{
		safeDecisionEarned = true;
		std::cout << "\nACHIEVEMENT UNLOCKED: Safe Decision!\n";
		std::cout << "You made your first correct safety decision.\n";
	}

	// Award the Safety Expert achievement.
	if (correctScenarioDecisions >= SAFETY_EXPERT_REQUIREMENT && !safetyExpertEarned)
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

	// Display the names of completed lessons.
	std::cout << "\n===== Completed Lessons =====\n";

	for (std::string lessonName : completedLessonNames)
	{
		std::cout << "- " << lessonName << "\n";
	}

	// Display the names of completed scenarios.
	std::cout << "\n===== Completed Scenarios =====\n";

	for (std::string scenarioName : completedScenarioNames)
	{
		std::cout << "- " << scenarioName << "\n";
	}

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

// saves the user's progress to a file.
// Saves the user's progress to a file.
void ProgressTracker::SaveProgress()
{
	std::ofstream outFile("ReadyQuestProgress.txt");

	if (!outFile)
	{
		std::cout << "Unable to save progress.\n";
		return;
	}

	outFile << totalPoints << "\n";
	outFile << completedLessons << "\n";
	outFile << completedScenarios << "\n";
	outFile << correctScenarioDecisions << "\n";

	outFile << firstLessonEarned << "\n";
	outFile << knowledgeChampionEarned << "\n";
	outFile << safeDecisionEarned << "\n";
	outFile << safetyExpertEarned << "\n";

	outFile << completedLessonNames.size() << "\n";

	for (std::string lessonName : completedLessonNames)
	{
		outFile << lessonName << "\n";
	}

	outFile << completedScenarioNames.size() << "\n";

	for (std::string scenarioName : completedScenarioNames)
	{
		outFile << scenarioName << "\n";
	}

	outFile.close();

	std::cout << "Progress saved successfully!\n";
}

// Loads the user's previously saved progress.
void ProgressTracker::LoadProgress()
{
	std::ifstream inFile("ReadyQuestProgress.txt");

	if (!inFile)
	{
		std::cout << "No saved progress found. Starting fresh.\n";
		return;
	}

	int lessonNameCount = 0;

	// Load points, completion counts, and achievements.
	if (!(inFile >> totalPoints
		>> completedLessons
		>> completedScenarios
		>> correctScenarioDecisions
		>> firstLessonEarned
		>> knowledgeChampionEarned
		>> safeDecisionEarned
		>> safetyExpertEarned
		>> lessonNameCount))
	{
		std::cout << "Unable to read saved progress.\n";
		return;
	}

	if (lessonNameCount < 0)
	{
		std::cout << "Invalid saved progress.\n";
		return;
	}

	// Clear old lesson names before loading saved names.
	completedLessonNames.clear();

	inFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 0; i < lessonNameCount; i++)
	{
		std::string lessonName;
		std::getline(inFile, lessonName);
		completedLessonNames.push_back(lessonName);
	}

	int scenarioNameCount = 0;

	if (!(inFile >> scenarioNameCount) || scenarioNameCount < 0)
	{
		std::cout << "Unable to read saved scenarios.\n";
		return;
	}

	// Clear old scenario names before loading saved names.
	completedScenarioNames.clear();

	inFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for (int i = 0; i < scenarioNameCount; i++)
	{
		std::string scenarioName;
		std::getline(inFile, scenarioName);
		completedScenarioNames.push_back(scenarioName);
	}

	inFile.close();

	std::cout << "Progress loaded successfully!\n";
}