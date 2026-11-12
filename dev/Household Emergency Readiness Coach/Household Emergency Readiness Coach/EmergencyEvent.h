#pragma once

#ifndef EMERGENCYEVENT_H
#define EMERGENCYEVENT_H


class Household;

class EmergencyEvent
{
private:
	// Points to the existing Household object
	Household* household;

public:
	// Receives the existing Household object.
	EmergencyEvent(Household* householdPointer);

	// Selects and displays a random emergency event.
	void DisplayRandomEvent();
};

#endif