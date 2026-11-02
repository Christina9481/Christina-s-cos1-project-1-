#pragma once
#include "ProgressTracker.h"
#ifndef READYQUEST_H
#define READYQUEST_H

// Coordinates the main ReadyQuest application.
class ReadyQuest
{
private:
	// Tracks points and completed activities.
	ProgressTracker progress;

public:
	// Creates a new ReadyQuest application.
	ReadyQuest();

	// Starts the application
	void Run();
};

#endif