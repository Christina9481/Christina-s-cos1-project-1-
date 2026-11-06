#pragma once

#ifndef PROGRESSTRACKER_H
#define PROGRESSTRACKER_H

class ProgressTracker
{
private:
	int totalPoints;
	int completedLessons;
	int completedScenarios;
	int correctScenarioDecisions;

	// Tracks which achievements the user has earned.
	bool firstLessonEarned;
	bool knowledgeChampionEarned;
	bool safeDecisionEarned;
	bool safetyExpertEarned;


public:
	ProgressTracker();

	void AddPoints(int points);

	// Subtracts points when the user makes an unsafe decision.
	void SubtractPoints(int points);

	void CompleteLesson(int score);
	void CompleteScenario(bool correct);

	void DisplayProgress();
};

#endif