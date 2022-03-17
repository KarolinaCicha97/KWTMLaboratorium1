#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
double radian = degree*(3.14*180);
return std::sin(radian); 
}

double degreemath::cos(double degree) {
double radian = degree*(3.14*180);
return std::cos(radian);
}

double degreemath::tg(double degree) {
double radian = degree*(3.14*180);
return std::tan(radian); 
}

double degreemath::ctg(double degree) {
double radian = degree*(3.14*180);
return 1/tan(radian);
}
//i tak dalej