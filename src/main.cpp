#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#include <trygonometria.cpp>
#endif
#include <iostream>


int main() {


std::cout << "SINUS\n";
double result;
#ifdef USE_TRIGONOMETRY_DEGREE
	result = degreemath::sin(100);
	std::cout << "\n By USE_TRIGONOMETRY_DEGREE - STOPNIE";
#else
	 result = cos(3.14/4.0);
	 std::cout << "\n By cmath Radiany ";
#endif
	
std::cout <<result;


}
