#include "trygonometria.h"
#include <trygonometria.cpp>
#include <iostream>

int main() {

	double wynik = degreemath::sin(100);
	std::cout << "\nSINUS:\n";
	std::cout <<wynik ;
	double wynik2 = degreemath::sin(100);
	std::cout << "\nCOSINUS:\n";
	std::cout << wynik2;
	double wynik3 = degreemath::tg(100);
	std::cout << "\nTANGENS:\n";
	std::cout << wynik3;
	double wynik4 = degreemath::ctg(100);
	std::cout << "\nCOTANGENS:\n";
	std::cout << wynik4;



}
