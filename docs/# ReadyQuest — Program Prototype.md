# ReadyQuest — Program Prototype

## Overview

ReadyQuest is a C++ console application designed to teach households how to prepare for emergencies. Users can explore emergency preparedness lessons, participate in interactive emergency scenarios, make decisions, receive feedback, earn points, and track their progress.

This prototype outlines the planned class structure, data structures, program flow, and user interactions.

---

## 1. Class Design

ReadyQuest will use separate classes to organize the program by responsibility.

### Implemented Classes

**ReadyQuest**
- Controls the main menu.
- Handles navigation between program features.
- Manages the overall flow of the application.

**Household**
- Stores household preparedness information.
- Displays household information.

**Lesson**
- Manages emergency preparedness lessons.
- Displays educational information to help users learn how to prepare for emergencies.

**Scenario**
- Handles interactive emergency situations.
- Presents choices to users.
- Provides feedback based on user decisions.

### Planned Classes

**ProgressTracker**
- Tracks points earned by the user.
- Records completed lessons and scenarios.
- Tracks achievements.
- Displays the user's overall progress.

**EventManager**
- Manages randomized surprise events during emergency scenarios.
- Introduces unexpected situations that require users to make additional decisions.

**FileManager**
- Saves and loads household information.
- Saves scores, completed activities, and achievements so users can continue their progress later.

---

## 2. Data Structures

ReadyQuest will use vectors and variables to store and organize information while the program is running.

**Emergency Lessons**
- Data structure: Vector.
- Stores available emergency preparedness lessons.
- Examples include power outages, tornado safety, flood safety, and severe weather preparedness.

**Emergency Scenarios**
- Data structure: Vector.
- Stores interactive emergency situations, questions, choices, and feedback.

**Completed Activities**
- Data structure: Vector.
- Tracks completed emergency lessons and scenarios.
- Allows the program to monitor user progress.

**Achievements**
- Data structure: Vector.
- Stores achievements earned by the user.
- Examples include completing the first lesson, completing five scenarios, reaching a points goal, and completing all available lessons.

**Emergency Events**
- Data structure: Vector.
- Stores possible randomized surprise events.
- Examples include flooding, tornado warnings, power outages, blocked roads, and loss of communication.

**User Score**
- Data structure: Integer variable.
- Tracks the user's total points.
- Users earn points by completing lessons and making safe decisions during emergency scenarios.

**Household Information**
- Data structure: Variables and possibly vectors.
- Stores the number of people in the household, number of pets, available emergency supplies, and special preparedness needs.

---

## 3. Program Flow

ReadyQuest will follow a sequence that allows users to navigate the application, complete activities, and track their preparedness progress.

1. **Start Program:** ReadyQuest launches.
2. **Welcome Screen:** Displays an introduction explaining that ReadyQuest teaches household emergency preparedness.
3. **Main Menu:** The user continues to the main menu.
4. **Select an Activity:** The user chooses an available feature, such as an emergency lesson, scenario, household profile, or progress report.
5. **Process Selection:** ReadyQuest opens the selected feature.
6. **Record Results:** Completed activities and earned points are recorded.
7. **Return to Main Menu:** After finishing an activity, the user returns to the main menu.
8. **Save Progress:** When the user selects Exit, ReadyQuest asks whether they want to save their progress.
9. **Exit Program:** If the user chooses to save, their progress is saved. The program then closes. If they choose not to save, the program closes without saving new progress.

---

## 4. User Interaction

ReadyQuest will allow users to interact with the application through menu selections, household information, emergency decisions, and progress tracking.

**Emergency Lessons**
- Users can select and view emergency preparedness lessons.
- Users can replay completed lessons to review information.

**Interactive Emergency Scenarios**
- Users can participate in realistic emergency situations.
- Users make decisions based on the situation presented.
- ReadyQuest explains whether their choices were safe or unsafe and why.
- Users receive information about safer actions.

**Household Profile**
- Users can enter household information.
- Users can update their information whenever needed.
- The information will help personalize preparedness guidance.

**Points and Achievements**
- Users earn points for completing lessons and making safe decisions.
- Users can earn achievements by reaching specific milestones.

**Progress Tracking**
- Users can view their scores and completed activities.
- Users can review their achievements and overall progress.

**Randomized Emergency Events**
- Users may encounter unexpected events during scenarios.
- Examples include floods, tornado warnings, power outages, blocked roads, and communication problems.

**Scenario Summary**
After completing a scenario, users will see:
- Points earned during the scenario.
- Whether their decisions were safe.
- Important lessons learned.
- Their updated total score.

**Replay Activities**
- Users can replay completed lessons and scenarios.
- Users can practice different decisions.
- Users can work toward improving their scores and earning additional achievements.

**Save and Load**
- Users will eventually be able to save their household information and progress.
- Users will be able to load previously saved information when returning to ReadyQuest.

---

## Conclusion

This prototype provides a starting blueprint for developing ReadyQuest. The existing classes provide the foundation of the application, while the planned classes will expand its functionality.

The next development priorities are implementing scoring and progress tracking, adding randomized emergency events, improving user interaction, and developing save and load functionality.