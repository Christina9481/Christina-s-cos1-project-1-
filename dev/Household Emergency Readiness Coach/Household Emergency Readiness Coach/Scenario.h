#pragma once

#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>

// Represents an interaction emergency scenario.
class Scenario
{
private:
	// Valid scenario answer choices.
	static const int MIN_SCENARIO_CHOICE = 1;
	static const int MAX_SCENARIO_CHOICE = 3;

public:
	// Creates a new Scenario object
	Scenario();

	// Displays an emergency scenario and returns the user's choice.
	int Display();
};

#endif