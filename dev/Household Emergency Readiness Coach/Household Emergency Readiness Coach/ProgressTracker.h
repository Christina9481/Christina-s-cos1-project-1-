#pragma once

#ifndef PROGRESSTRACKER_H
#define PROGRESSTRACKER_H
#include <string>
#include <vector>

class ProgressTracker
{
private:

	// Achievement requirements.
	static const int FIRST_LESSON_REQUIREMENT = 1;
	static const int KNOWLEDGE_CHAMPION_REQUIREMENT = 3;
	static const int FIRST_SAFE_DECISION_REQUIREMENT = 1;
	static const int SAFETY_EXPERT_REQUIREMENT = 3;

	int totalPoints;
	int completedLessons;
	int completedScenarios;
	int correctScenarioDecisions;

	// Tracks which achievements the user has earned.
	bool firstLessonEarned;
	bool knowledgeChampionEarned;
	bool safeDecisionEarned;
	bool safetyExpertEarned;

	// Stores the names of completed lessons and scenarios.
	std::vector<std::string> completedLessonNames;
	std::vector<std::string> completedScenarioNames;


public:
	ProgressTracker();

	void AddPoints(int points);

	// Subtracts points when the user makes an unsafe decision.
	void SubtractPoints(int points);

	void CompleteLesson(int score, std::string lessonName);
	void CompleteScenario(bool correct, std::string scenarioName);

	void DisplayProgress();

	// Saves and loads the user's progress.
	void SaveProgress();
	void LoadProgress();
};

#endif