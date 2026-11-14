ReadyQuest — Milestone 3



Features Added



\- Added interactive random emergency events that allow users to make decisions during emergency situations.

\- Improved random event selection so all five emergency events occur once before an event repeats.

\- Improved household preparedness feedback to provide clearer information about readiness.

\- Added a welcome screen and introduction to make the application easier to understand when it starts.

\- Improved household input validation.



System Design Updates



\- Connected the EmergencyEvent class to the existing Household object using a pointer.

\- Improved communication between the application's classes.

\- Continued organizing the program so each class handles its own responsibilities.



Refactoring and Code Quality



\- Reviewed the code and replaced repeated magic numbers with named constants.

\- Improved readability and made repeated values easier to maintain.

\- Improved input validation to handle invalid user entries.

\- Tested existing features after making changes to check that they continued working correctly.



What I Changed and Why



I expanded the random emergency event system to make it more interactive and prevent the same event from repeating before all five events have occurred.



I connected EmergencyEvent to Household so emergency events can interact with household preparedness information.



I also replaced magic numbers with named constants to make the code easier to understand and update.



The welcome screen and improved feedback make ReadyQuest easier for users to navigate and understand.



Testing



I tested the main menu, emergency lessons, interactive scenarios, household preparedness information, progress tracking, achievements, and random emergency events.



I also tested that all five random emergency events occur before an event repeats.



The project built successfully with zero compiler errors during testing.

