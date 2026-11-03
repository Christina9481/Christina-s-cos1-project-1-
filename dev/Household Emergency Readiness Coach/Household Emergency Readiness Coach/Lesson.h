#pragma once

#ifndef LESSON_H
#define LESSON_H
#include <string>

// Represents an emergency prepardness lesson.
class Lesson
{
public:
	// Creates a new Lesson object.
	Lesson();

	// Displays an emergency preparedness lesson.
	int Display();

private:
	// Displays the preparation steps before an outage.
	void DisplayBeforeOutage();

	// displays safety during an outage.
	void DisplayDuringOutage();

	// Displays recovery steps aftr an outage.
	void DisplayAfterOutage();

	// Tests what the user learned.
	int KnowledgeCheck();
};

#endif