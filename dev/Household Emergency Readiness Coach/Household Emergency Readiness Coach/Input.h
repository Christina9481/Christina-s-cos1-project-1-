#pragma once

#include <string>


// Holds reusable functions for getting valid user input.
namespace Input
{
    // Gets a valid number within the specified range.
    int GetNumber(const std::string& prompt, int min, int max);

    // Gets a nonempty text response.
    std::string GetString(const std::string& prompt);
}