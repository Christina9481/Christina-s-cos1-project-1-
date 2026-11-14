#pragma once

#ifndef EMERGENCYEVENT_H
#define EMERGENCYEVENT_H


class Household;

class EmergencyEvent
{
private:
	// Total number of emergency events.
	static const int TOTAL_EVENTS = 5;


	// Event numbering.
	static const int FIRST_EVENT_NUMBER = 1;

	// Valid emergency event answer choices.
	static const int MIN_EVENT_CHOICE = 1;
	static const int MAX_EVENT_CHOICE = 3;

	// Emergency event identifiers.
	static const int POWER_OUTAGE_EVENT = 1;
	static const int TORNADO_EVENT = 2;
	static const int WATER_INTERRUPTION_EVENT = 3;
	static const int HOUSE_FIRE_EVENT = 4;
	static const int WINTER_STORM_EVENT = 5;


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