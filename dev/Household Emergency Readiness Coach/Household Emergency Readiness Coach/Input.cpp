
#include "Input.h"
#include <iostream>
#include <stdexcept>

// Defines the reusable input functions.
namespace Input
{
    // Gets a number within the allowed range.
    int GetNumber(const std::string& prompt, int min, int max)
    {
        while (true)
        {
            std::string input;

            std::cout << prompt;
            std::getline(std::cin, input);

            try
            {
                // Converts the text into a number and records where conversion stopped.
                std::size_t position = 0;
                int number = std::stoi(input, &position);

                // Rejects extra characters after the number.
                if (input.find_first_not_of(" \t\n\r", position) != std::string::npos)
                {
                    std::cout << "Invalid input. Please enter a number only.\n";
                }
                // Checks whether the number is within the allowed range.
                else if (number >= min && number <= max)
                {
                    return number;
                }
                else
                {
                    std::cout << "Please enter a number from "
                        << min << " to " << max << ".\n";
                }
            }
            catch (const std::invalid_argument&)
            {
                std::cout << "Invalid input. Please enter a number.\n";
            }
            catch (const std::out_of_range&)
            {
                std::cout << "That number is too large or too small. Try again.\n";
            }
        }
    }

    // Gets a nonempty text response.
    std::string GetString(const std::string& prompt)
    {
        while (true)
        {
            std::string input;

            std::cout << prompt;
            std::getline(std::cin, input);

            if (!input.empty())
            {
                return input;
            }

            std::cout << "Input cannot be empty. Please try again.\n";
        }
    }
}
