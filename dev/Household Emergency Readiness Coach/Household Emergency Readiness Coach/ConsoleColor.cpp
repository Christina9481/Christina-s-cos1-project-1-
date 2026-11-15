
#include "ConsoleColor.h"
#include <Windows.h>

// Changes the console text color.
void ConsoleColor::SetColor(int color)
{
    // Gets the console output handle.
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    // Applies the selected text color.
    SetConsoleTextAttribute(console, color);
}

// Restores the default white text color.
void ConsoleColor::ResetColor()
{
    SetColor(WHITE);
}
