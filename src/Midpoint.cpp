#include <iostream>
#include <vector>
#include <cmath>

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

// Midpoint Rule integration
double midpointRule(const std::vector<double>& coeffs, double a, double b, int n)
{
    double h = (b - a) / n;
    double integral = 0.0;

    for (int i = 0; i < n; ++i)
    {
        double midpoint = a + (i + 0.5) * h;
        integral += evaluatePolynomial(coeffs, midpoint);
    }

    return integral * h;
}

int main()
{
    // Example polynomial: f(x) = 3x^2 + 2x + 1
    std::vector<double> coefficients = {1, 2, 3}; // f(x) = 1 + 2x + 3x^2

    double a = 0.0;  // Lower bound
    double b = 5.0;  // Upper bound
    int n = 1000;    // Number of subintervals

    double result = midpointRule(coefficients, a, b, n);
    std::cout << "Approximate integral (Midpoint Rule): " << result << std::endl;

    return 0;
}
