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

	// Knowledge check settings.
	static const int MIN_ANSWER_CHOICE = 1;
	static const int MAX_ANSWER_CHOICE = 3;
	static const int TOTAL_QUESTIONS = 3;

	// Correct answers for each knowledge question.
	static const int QUESTION_ONE_ANSWER = 2;
	static const int QUESTION_TWO_ANSWER = 3;
	static const int QUESTION_THREE_ANSWER = 1;

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