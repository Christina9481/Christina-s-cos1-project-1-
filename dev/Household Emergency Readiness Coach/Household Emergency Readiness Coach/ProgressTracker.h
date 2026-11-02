#pragma once

#ifndef PROGRESSTRACKER_H
#define PROGRESSTRACKER_H

class ProgressTracker
{
private:
	int totalPoints;
	int completedLessons;
	int completedScenarios;

public:
	ProgressTracker();

	void AddPoints(int points);
	// Subtracts points when the user makes an unsafe decision.
	void SubtractPoints(int points);
	void CompleteLesson();
	void CompleteScenario();

	void DisplayProgress();
};

#endif