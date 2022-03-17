#define _USE_MATH_DEFINES

#include "trygonometria.h"
#include <cmath>
#include <numbers> // std::numbers


double degreemath::sin(double degree) {
double radian = degree*(M_PI /180);
return std::sin(radian); 
}

double degreemath::cos(double degree) {
double radian = degree*(M_PI /180);
return std::cos(radian);
}

double degreemath::tg(double degree) {
double radian = degree*(M_PI /180);
return std::tan(radian); 
}

double degreemath::ctg(double degree) {
double radian = degree*(M_PI /180);
return 1/tan(radian);
}
//i tak dalej