#include <iostream>
#include <stdexcept>
#include <numeric> // For std::gcd

class Fraction {
private:
    int numerator;
    int denominator;
    float lcd;
    float lcm;

public:
    // Constructor
    Fraction();
    Fraction(int num);
    Fraction(int num, int den);

    // Fraction(int num, int den) : numerator(num), denominator(den) {                 //To make sure that the denominator will not be zero.
    //      if (den == 0) {
    //         throw std::invalid_argument("Denominator cannot be zero.");
    //     }
    //     normalize();
    // }

    void normalize();
    Fraction operator+(const Fraction& other);
    Fraction operator-(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);
    bool operator==(const Fraction& other) const;
    
    
    static int lcd(int a, int b);
    static int lcm(int a, int b);

    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};
