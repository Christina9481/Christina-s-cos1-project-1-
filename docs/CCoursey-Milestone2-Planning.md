> Use this worksheet to plan the next phase of your project **before you begin coding**.  
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**  
→ ReadyQuest – Household Emergency Readiness Coach

**What does your program currently do? (1–3 sentences)**  
→ ReadyQuest is a C++ console application that teaches users about household emergency preparedness through interactive lessons, decision-based scenarios, and randomized emergency events. It allows users to complete a household preparedness checklist, track completed lessons and scenarios, earn points and achievements, and view their progress.

---
## 🔍 Current Progress Check

**What is working right now?**  
→ The main menu and input validation are working. Emergency lessons, an interactive scenario, scoring, achievements, household preparedness tracking, randomized emergency events, and progress tracking are implemented. The Progress screen displays completed lesson and scenario names. The Household screen retains checklist answers during the current program session.

**What is NOT working or incomplete?**  
→ ReadyQuest does not yet save progress permanently between program sessions. The Save and Load feature is planned for Week 4. The current version has a limited number of lessons and scenarios. Random emergency events currently display an event but do not yet ask the user to make a preparedness decision.

**What feels confusing or messy in your code?**  
→ Understanding how the different classes and functions work together can still be challenging. I am continuing to improve my understanding of how information is passed between classes and how each class contributes to the overall program.

---
## 🚀 Feature Planning

List the features you plan to add or improve this week.

### Feature 1
**Name:**  
→ Household Preparedness Feedback

**What does this feature do?**  
→ Builds on the household checklist by identifying which preparedness items are missing, showing the household's preparedness score, and explaining what the user should work on next.

**Why is this feature important?**  
→ It helps users understand what they are missing and gives them a clear direction for becoming better prepared for emergencies.

---
### Feature 2
**Name:**  
→ Expanded Emergency Lessons and Scenarios

**What does this feature do?**  
→ Adds more emergency preparedness lessons and interactive scenarios covering situations such as severe storms, tornadoes, water supply interruptions, and other household emergencies. Users will answer questions or make decisions, receive safety feedback, and earn or lose points based on their choices.

**Why is this feature important?**  
→ It gives users more opportunities to learn practical emergency preparedness skills and practice making safe decisions during unexpected situations.

---
### Feature 3 (optional)
**Name:**  
→ Emergency Event Preparedness Challenges

**What does this feature do?**  
→ Expands random emergency events so that after an event appears, the user can choose how to respond. ReadyQuest will provide feedback explaining whether the decision is safe and update the user's score based on the response.

**Why is this feature important?**  
→ It turns random emergency events into interactive learning experiences instead of simply displaying emergency information. It will also strengthen the connections between the EmergencyEvent, ProgressTracker, and Household classes.

---
## 🧩 System Design Updates

**Will you need to create any new classes? If so, which ones?**  
→ No new classes are currently planned. I will continue using the existing classes to keep the program organized and avoid unnecessary complexity.

**Will you modify any existing classes? How?**  
→ Yes. I plan to expand the existing classes:
- `Household` – Identify missing preparedness items and provide useful feedback based on the checklist.
- `Lesson` – Add more emergency preparedness lessons and knowledge checks.
- `Scenario` – Add more interactive emergency situations and safety decisions.
- `EmergencyEvent` – Expand random emergency events to include interactive preparedness challenges.
- `ProgressTracker` – Continue tracking points, completed activities, and achievements, and connect it to new activities when appropriate.
- `ReadyQuest` – Connect the classes and manage the main menu and program flow.

**What data structures will you use (vectors, 2D vectors, etc.)?**  
→ I will use vectors to store completed lesson names and scenario names. I will also use variables and Boolean values to track points, achievements, and household preparedness. Additional vectors may be used as more lessons and scenarios are added. These structures will help organize information and make the program easier to expand.

---
## 🔄 Program Flow

**Describe how a user interacts with your program:**

1. Program starts → ReadyQuest displays its welcome message and main menu.
2. User chooses → The user selects an option, such as emergency lessons, interactive scenarios, household preparedness, progress and achievements, or random emergency events.
3. Program responds → ReadyQuest sends the user to the selected feature. The appropriate class handles the activity, provides information or feedback, and updates progress when applicable.
4. Loop/next step → After completing an activity, the program returns the user to the main menu so they can select another feature or exit the application.

---
## 🎯 Usability Improvements

How will you make your program easier to use this week?

- Clearer prompts:  
→ I will use clear instructions that explain what the user needs to enter and what each choice will do.

- Better error handling:  
→ I will improve input validation so the program recognizes invalid entries, displays helpful error messages, and allows users to try again without crashing.

- Improved menu/navigation:  
→ I will make sure the program consistently returns users to the main menu after completing an activity and provides clear menu options.

---
## ⚠️ Potential Challenges

**What do you think will be the hardest part this week?**  
→ The hardest part will be understanding how the different classes communicate and work together, especially when adding features that interact with the existing scoring and progress systems.

**What is your plan if you get stuck?**  
→ I will break the problem into smaller steps, review my code and compiler errors, use Visual Studio debugging tools, research solutions, and ask my instructor for help when needed. I will test each change before moving forward.

---
## 📈 Level Up Goal

**What skill are you focusing on improving this week?**  
→ I want to improve my ability to understand how classes and functions work together in an object-oriented C++ program.

**What will you do to improve it?**  
(e.g., tutorial, practice, debugging, office hours)  
→ I will practice tracing how information moves between classes, add comments explaining what my code does, use Visual Studio debugging tools to identify and resolve errors, and explain how each class contributes to ReadyQuest.

---
## 🗓️ Task Breakdown (GitHub Issues Planning)

List the tasks you plan to create as GitHub Issues:

- [ ] Expand emergency lessons and interactive scenarios with additional content and knowledge checks.
- [ ] Improve household preparedness feedback by identifying missing checklist items.
- [ ] Add interactive response choices and feedback to random emergency events.
- [ ] Test the new features, check input validation and navigation, and document the changes.

---
## 🔥 Final Check

Before you start coding, ask yourself:

- [x] Do I know what I’m building this week?
- [x] Do I know where to start?
- [x] Did I break my work into small tasks?

If yes → start coding 🚀  
If no → refine your plan first

---
## 😈 Final Thought

> Plan it now… or debug it later.
