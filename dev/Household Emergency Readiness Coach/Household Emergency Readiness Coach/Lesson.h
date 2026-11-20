#pragma once

#ifndef LESSON_H
#define LESSON_H
#include <string>

// Represents an emergency preparedness lesson.
class Lesson
{
public:
	// Creates a new Lesson object.
	Lesson();

	// Displays an emergency preparedness lesson.
	int Display();

	// Displays additional resources for the selected lesson.
	void DisplayResource();

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

	// Correct answers for the Hurricane knowledge check.
	static const int HURRICANE_QUESTION_ONE_ANSWER = 2;
	static const int HURRICANE_QUESTION_TWO_ANSWER = 3;
	static const int HURRICANE_QUESTION_THREE_ANSWER = 1;

	// Correct answers for the House Fire knowledge check.
	static const int HOUSE_FIRE_QUESTION_ONE_ANSWER = 2;
	static const int HOUSE_FIRE_QUESTION_TWO_ANSWER = 1;
	static const int HOUSE_FIRE_QUESTION_THREE_ANSWER = 3;

	// Correct answers for the Earthquake knowledge check.
	static const int EARTHQUAKE_QUESTION_ONE_ANSWER = 2;
	static const int EARTHQUAKE_QUESTION_TWO_ANSWER = 1;
	static const int EARTHQUAKE_QUESTION_THREE_ANSWER = 3;
	
	// Emergency lesson menu choices.
	static const int MIN_LESSON_CHOICE = 1;
	static const int MAX_LESSON_CHOICE = 5;

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
	int DisplayEarthquakeLesson();
};

#endif