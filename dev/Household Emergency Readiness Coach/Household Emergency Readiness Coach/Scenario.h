#pragma once

#ifndef SCENARIO_H
#define SCENARIO_H

#include <string>

// Represents an interactive emergency scenario.
class Scenario
{
private:
	// Valid scenario answer choices.
	static const int MIN_MENU_CHOICE = 1;
	static const int MAX_MENU_CHOICE = 6;

	// Valid answers for each emergency scenario.
	static const int MIN_SCENARIO_CHOICE = 1;
	static const int MAX_SCENARIO_CHOICE = 3;

public:
	// Creates a new Scenario object
	Scenario();

	// Displays the scenario selection menu.
	int DisplayMenu();

	// Displays the selected scenario and returns whether the answer is correct.
	bool Display(int scenarioIndex);

    // Returns the name of the selected scenario.
	std::string GetScenarioName(int scenarioIndex);
};

#endif