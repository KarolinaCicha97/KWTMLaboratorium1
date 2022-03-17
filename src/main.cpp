#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#include <trygonometria.cpp>
#endif
#include <iostream>


int main(int argc, char ** argv) {


std::cout << "SINUS\n";
double result;
#ifdef USE_TRIGONOMETRY_DEGREE
	result = degreemath::sin(100);
	std::cout << "\n By USE_TRIGONOMETRY_DEGREE - STOPNIE\n";
#else
	 result = cos(3.14/4.0);
	 std::cout << "\n By cmath Radiany\n ";
#endif
	
//std::cout <<result;

if (argc > 1)
{
	
	double argument = std::atoi(argv[1]);
	 result = degreemath::sin(argument);

	 std::cout << result<<"\n";
}

}
