
#pragma once

#include <iostream>
#include <string>

#ifdef _WIN32
#define NOMINMAX
#include <Windows.h>
#endif

// Provides colors for the ReadyQuest console.
class ConsoleColor
{
public:

    // Existing colors used by the project.
    enum Color
    {
        BLUE = 9,
        GREEN = 10,
        CYAN = 11,
        RED = 12,
        MAGENTA = 13,
        ORANGE = 14,
        WHITE = 15
    };

    // Existing color functions used throughout ReadyQuest.
    static void SetColor(int color);
    static void ResetColor();


    // Available console colors.
    enum class Ink
    {
        BLUE,
        GREEN,
        CYAN,
        RED,
        MAGENTA,
        ORANGE,
        WHITE
    };

    // Prints a message using the selected color.
    inline static void Print(const std::string& message, Ink color)
    {
#ifdef _WIN32
        // Gets the console output handle.
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);

        // Stores the original console color.
        CONSOLE_SCREEN_BUFFER_INFO original;

        // Checks whether the output is a Windows console.
        if (output != INVALID_HANDLE_VALUE &&
            GetConsoleScreenBufferInfo(output, &original))
        {
            // Starts with the default white color.
            WORD consoleColor = FOREGROUND_RED |
                FOREGROUND_GREEN |
                FOREGROUND_BLUE |
                FOREGROUND_INTENSITY;

            // Selects the requested color.
            if (color == Ink::CYAN)
            {
                consoleColor = FOREGROUND_GREEN |
                    FOREGROUND_BLUE | FOREGROUND_INTENSITY;
            }
            else if (color == Ink::GREEN)
            {
                consoleColor = FOREGROUND_GREEN |
                    FOREGROUND_INTENSITY;
            }
            else if (color == Ink::RED)
            {
                consoleColor = FOREGROUND_RED |
                    FOREGROUND_INTENSITY;
            }
            else if (color == Ink::ORANGE)
            {
                consoleColor = FOREGROUND_RED |
                    FOREGROUND_GREEN | FOREGROUND_INTENSITY;
            }
            else if (color == Ink::BLUE)
            {
                consoleColor = FOREGROUND_BLUE |
                    FOREGROUND_INTENSITY;
            }
            else if (color == Ink::MAGENTA)
            {
                consoleColor = FOREGROUND_RED |
                    FOREGROUND_BLUE | FOREGROUND_INTENSITY;
            }

            // Applies the selected color.
            std::cout.flush();
            SetConsoleTextAttribute(output, consoleColor);

            // Prints the message.
            std::cout << message;
            std::cout.flush();

            // Restores the original console color.
            SetConsoleTextAttribute(output, original.wAttributes);
        }
        else
        {
            // Prints normally if a Windows console is unavailable.
            std::cout << message;
        }
#else
        // Prints normally on other platforms.
        std::cout << message;
#endif
    }
};

