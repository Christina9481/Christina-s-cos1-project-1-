
#include "ConsoleColor.h"


// Changes the console text color.
void ConsoleColor::SetColor(int color)
{
#ifdef _WIN32
    // Gets the console output handle.
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    // Applies the selected text color.
    SetConsoleTextAttribute(console, color);
#endif
}

// Restores the default white text color.
void ConsoleColor::ResetColor()
{
    SetColor(WHITE);
}
