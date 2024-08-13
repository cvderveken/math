#include <cmath>

// Function to calculate the square root of a number
double sqrtNumber(double num) {
    return std::sqrt(num);
}

// Function to calculate the power of a number
double powerNumber(double base, double exponent) {
    return std::pow(base, exponent);
}

// Function to calculate the sine of an angle
double calculateSine(double angleInDegrees) {
    return std::sin(angleInDegrees * M_PI / 180.0);
