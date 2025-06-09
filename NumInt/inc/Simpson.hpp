#ifndef SIMPSON_HPP
#define SIMPSON_HPP

#include <vector>

double evaluatePolynomial(const std::vector<double>& coeffs, double x);
double simpsonsRule(const std::vector<double>& coeffs, double a, double b, int n);
int main();

#endif // SIMPSON_HPP