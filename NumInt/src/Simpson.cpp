#include <iostream>
#include <vector>
#include <cmath>
#include "Simpson.hpp"

// Evaluate polynomial f(x) = a0 + a1*x + a2*x^2 + ... + an*x^n
double evaluatePolynomial(const std::vector<double>& coeffs, double x)
{
    double result = 0.0;

    for (size_t i = 0; i < coeffs.size(); ++i)
    {
        result += coeffs[i] * std::pow(x, i);
    }

    return result;
}

// Simpson's Rule integration
double simpsonsRule(const std::vector<double>& coeffs, double a, double b, int n)
{
    if (n % 2 != 0)
    {
        std::cerr << "Error: n must be even for Simpson's Rule.\n";
        
        return NAN;
    }

    double h = (b - a) / n;
    double integral = evaluatePolynomial(coeffs, a) + evaluatePolynomial(coeffs, b);

    for (int i = 1; i < n; ++i)
    {
        double x = a + i * h;

        if (i % 2 == 0)
        {
            integral += 2 * evaluatePolynomial(coeffs, x);
        }
            
        else
        {
            integral += 4 * evaluatePolynomial(coeffs, x);
        }
            
    }

    return integral * h / 3.0;
}

int main()
{
    // Example polynomial: f(x) = 3x^2 + 2x + 1
    std::vector<double> coefficients = {1, 2, 3}; // f(x) = 1 + 2x + 3x^2

    double a = 0.0;  // Lower bound
    double b = 5.0;  // Upper bound
    int n = 100;     // Must be even for Simpson's Rule

    double result = simpsonsRule(coefficients, a, b, n);
    std::cout << "Approximate integral (Simpson's Rule): " << result << std::endl;

    #if defined(__clang__)
        std::cout << "Clang";
    #elif defined(__GNUC__) || defined(__GNUG__)
        std::cout << "GCC";
    #elif defined(_MSC_VER)
        std::cout << "MSVC";
    #else
        std::cout << "Unknown Compiler";
    #endif
    
    return 0;
}
