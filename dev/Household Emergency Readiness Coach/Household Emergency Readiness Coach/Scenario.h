#pragma once

#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>

// Represents an interaction emergency scenario.
class Scenario
{
public:
	// Creates a new Scenario object
	Scenario();

	// Displays an emergency scenario and returns the user's choice.
	int Display();
};

#endif