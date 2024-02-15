#include "Parallelepiped.h"
#include <iostream>

int main() {
	double* side1 = new double(3);
	double* side2 = new double(1);
	double* side3 = new double(3);

	Parallelepiped p(side1, side2, side3);
	Parallelepiped p2(side1, side2, side3);
	while (true) {
		p = p2;
		Parallelepiped p3(p2);
		delete p3;
	};
	return 0;
}