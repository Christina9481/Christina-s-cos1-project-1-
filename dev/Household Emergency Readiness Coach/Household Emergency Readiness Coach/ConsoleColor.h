#pragma once

// Provides colors for the ReadyQuest console.
class ConsoleColor
{
public:

    // Available console colors.
    enum Color
    {
        BLUE = 9,
        GREEN = 10,
        CYAN = 11,
        RED = 12,
        MAGENTA = 13,
        YELLOW = 14,
        WHITE = 15
    };

    // Changes the console text color.
    static void SetColor(int color);

    // Restores the default white text color.
    static void ResetColor();
};
