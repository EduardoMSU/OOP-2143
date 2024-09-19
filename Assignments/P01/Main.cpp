// Eduardo Robles
// erlalo2305@gmail.com
// P01
// 2143 OOP
// FY24

// Description: This program will overload the +,-,*,/, and == operators to do fractions.

// Usage: 

//Files: "input" and "header"

#include "fraction.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>  // For std::string


int main() {
    std::ifstream infile("input.dat"); // Change to your input file path
    if (!infile) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        // Find positions of operators
        size_t opPos = line.find_first_of("+-*/");
        if (opPos == std::string::npos) {
            std::cerr << "Invalid input format: " << line << std::endl;
            continue;
        }

        // Extract fractions and operator
        std::string frac1_str = line.substr(0, opPos - 1);
        char operation = line[opPos];
        std::string frac2_str = line.substr(opPos + 2); // +2 to skip operator and space

        // Parse the fractions
        int num1, den1, num2, den2;
        sscanf(frac1_str.c_str(), "%d/%d", &num1, &den1);
        sscanf(frac2_str.c_str(), "%d/%d", &num2, &den2);

        Fraction frac1(num1, den1);
        Fraction frac2(num2, den2);
        Fraction result(0, 1);                          // Initialize result fraction

        try {
            
            switch (operation) {
                case '+':
                    result = frac1 + frac2;
                    break;
                case '-':
                    result = frac1 - frac2;
                    break;
                case '*':
                    result = frac1 * frac2;
                    break;
                case '/':
                    result = frac1 / frac2;
                    break;
                default:
                    std::cerr << "Invalid operator in line: " << line << std::endl;
                    continue;
            }

            std::cout << "Result: " << result << std::endl; // Output the result

        } catch (const std::invalid_argument& e) {
            std::cerr << "Error in line '" << line << "': " << e.what() << std::endl;
        }
    }

    infile.close(); // Close the input file
    return 0;
}