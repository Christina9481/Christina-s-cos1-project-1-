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

	// Returns the name of the selected lesson.
	std::string GetLessonName();

private:
	// stores the name of the selected emergency lesson.
	std::string lessonName;

	// Knowledge check settings.
	static const int MIN_ANSWER_CHOICE = 1;
	static const int MAX_ANSWER_CHOICE = 3;
	static const int TOTAL_QUESTIONS = 3;

	// Correct answers for the power outage knowledge check.
	static const int QUESTION_ONE_ANSWER = 2;
	static const int QUESTION_TWO_ANSWER = 3;
	static const int QUESTION_THREE_ANSWER = 1;

	// Correct answers for the Tornado knowledge check.
	static const int TORNADO_QUESTION_ONE_ANSWER = 2;
	static const int TORNADO_QUESTION_TWO_ANSWER = 3;
	static const int TORNADO_QUESTION_THREE_ANSWER = 2;
	
	// Emergency lesson menu choices.
	static const int MIN_LESSON_CHOICE = 1;
	static const int MAX_LESSON_CHOICE = 2;

	// Displays the Power Outage Lesson section.
	void DisplayBeforeOutage();
	void DisplayDuringOutage();
	void DisplayAfterOutage();

	// Tests what the user learned about the power outage.
	int KnowledgeCheck();

	// Displays the additional emergency lessons.
	int DisplayTornadoLesson();
	int DisplayHurricaneLesson();
	int DisplayHouseFireLesson();
	int DisplayWinterStormLesson();
};

#endif