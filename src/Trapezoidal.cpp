#include <iostream>
#include <vector>
#include <cmath>

// Evaluate the polynomial at a given x
double evaluatePolynomial(const std::vector<double>& coeffs, double x)
{
    double result = 0.0;
    
    for (size_t i = 0; i < coeffs.size(); ++i)
    {
        result += coeffs[i] * std::pow(x, i);
    }
    
    return result;
}

// Trapezoidal Rule integration
double trapezoidalRule(const std::vector<double>& coeffs, double a, double b, int n)
{
    double h = (b - a) / n;
    double integral = 0.5 * (evaluatePolynomial(coeffs, a) + evaluatePolynomial(coeffs, b));

    for (int i = 1; i < n; ++i)
    {
        double x = a + i * h;
        integral += evaluatePolynomial(coeffs, x);
    }

    return integral * h;
}

int main()
{
    // Example polynomial: f(x) = 3x^2 + 2x + 1
    std::vector<double> coefficients = {1, 2, 3}; // 1 + 2x + 3x^2

    double a = 0.0;      // Lower limit
    double b = 5.0;      // Upper limit
    int n = 1000;        // Number of subintervals

    double result = trapezoidalRule(coefficients, a, b, n);

    std::cout << "Approximate integral: " << result << std::endl;
    return 0;
}
