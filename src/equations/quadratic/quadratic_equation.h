#ifndef QUADRATIC_EQUATION_QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_QUADRATIC_EQUATION_H
#include <complex.h>
#include "../equation.h"


typedef struct {
    Equation eq;
    
    double a;
    double b;
    double c;
} QuadraticEquation;

QuadraticEquation* make_quadratic_equation(double a, double b, double c);


void delete_quadratic_equation(QuadraticEquation* equation);

double solve_quadratic_equation(const QuadraticEquation* equation);


#endif