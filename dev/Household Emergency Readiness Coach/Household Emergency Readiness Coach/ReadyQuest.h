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

	// Menu option numbers.
	static const int MIN_MENU_CHOICE = 1;
	static const int MAX_MENU_CHOICE = 6;
	static const int EXIT_MENU_CHOICE = 6;
	
	// Tracks points and completed activities.
	ProgressTracker progress;

	// Stores household preparedness answers.
	Household household;

	// Handles random emergency events.
	EmergencyEvent emergencyEvent;


public:
	// Creates a new ReadyQuest application.
	ReadyQuest();

	// Starts the application
	void Run();

};

#endif