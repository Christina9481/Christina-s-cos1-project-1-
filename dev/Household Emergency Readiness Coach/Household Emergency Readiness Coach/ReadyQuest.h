#pragma once
#include "ProgressTracker.h"
#ifndef READYQUEST_H
#define READYQUEST_H
#include "EmergencyEvent.h"
#include "Household.h"

// Coordinates the main ReadyQuest application.
class ReadyQuest
{
private:
	// Tracks points and completed activities.
	ProgressTracker progress;

	// Handles random emergency events.
	EmergencyEvent emergencyEvent;

	// Stores household preparedness answers.
	Household household;

public:
	// Creates a new ReadyQuest application.
	ReadyQuest();

	// Starts the application
	void Run();

};

#endif