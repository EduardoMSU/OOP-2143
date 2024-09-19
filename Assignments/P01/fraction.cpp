    #include "fraction.h"
    // #include <iostream>
    // #include <algorithm>
    // #include <sstream>

    Fraction::Fraction() : numerator(0), denominator(1) {}

    Fraction::Fraction(int num) : numerator(num), denominator(1) {
        normalize();
    }

    // Constructor for fraction
    Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
      if (den == 0) {
          throw std::invalid_argument("Denominator cannot be zero.");
      }
       normalize();
    }

    void Fraction::normalize() {                                                              //To make sure the denominator is positive.
        int gcd_value = std::gcd(numerator, denominator);
        numerator /= gcd_value;
        denominator /= gcd_value;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
      // Overloaded addition operator
   Fraction Fraction::operator+(const Fraction& other) {                                   //Use LCM and LCD to add fractions correctly
      char other;
       int lcd_value = lcd(denominator, other.denominator);
        int new_numerator = (numerator * (lcd_value / denominator)) + (other.numerator * (lcd_value / other.denominator));
        return Fraction(new_numerator, lcd_value);
     }

    // Additional overloaded operators 
    // Overloaded subtraction operator
    Fraction Fraction::operator-(const Fraction& other) {                                     //Implement the subtraction logic
        int lcd_value = lcd(denominator, other.denominator);
        int new_numerator = (numerator * (lcd_value / denominator)) - (other.numerator * (lcd_value / other.denominator));
        return Fraction(new_numerator, lcd_value);
    }

    // Overloaded multiplication operator
    Fraction Fraction::operator*(const Fraction& other) {                                     //Implement the multiplication logic
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }

    // Overloaded division operator
    Fraction Fraction::operator/(const Fraction& other) {                                     //Implement the division logic
         if (other.numerator == 0) {
            throw std::invalid_argument("Cannot divide by zero.");
        }
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    // Overloaded equality operator (==)
    bool Fraction::operator==(const Fraction& other) const {                                  //Check if two fractions are equal by comparing numerators and denominators
        return numerator == other.numerator && denominator == other.denominator;
    }

    // Overload output operator (<<) for printing fractions
    std::ostream& operator<<(std::ostream& os, const Fraction& frac) {       //Implement methods to read input from stdin (lecture topic)
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

// Function to calculate Least Common Denominator (LCD)
static int lcd(int a, int b) {                                                   //Implement logic for LCD
    return lcm(a, b);
}

// Function to calculate Least Common Multiple (LCM)
static int lcm(int a, int b) {                                                   //Implement logic for LCM
    return (abs(a * b) / std::gcd(a, b));
    return 0;
}