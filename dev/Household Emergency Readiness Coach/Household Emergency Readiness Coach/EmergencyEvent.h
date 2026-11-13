#pragma once

#ifndef EMERGENCYEVENT_H
#define EMERGENCYEVENT_H


class Household;

class EmergencyEvent
{
private:
	// Points to the existing Household object
	Household* household;

	// Stores the five emergency event numbers.
	int eventOrder[5];

	// Tracks how many events have been used.
	int eventsUsed;

	// Randomizes the order of the five events.
	void ShuffleEvents();

public:
	// Receives the existing Household object.
	EmergencyEvent(Household* householdPointer);

	// Selects and displays a random emergency event.
	void DisplayRandomEvent();
};

#endif