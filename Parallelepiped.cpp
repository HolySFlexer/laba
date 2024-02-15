#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double *l, double *w, double *h) : lenght(l), width(w), height(h) {};

Parallelepiped::Parallelepiped(const Parallelepiped& other) : lenght(other.lenght), width(other.width), height(other.height) {};

Parallelepiped& Parallelepiped::operator=(const Parallelepiped& other) {
	if (this != &other) {
		delete lenght;
		delete width;
		delete height;
		lenght = new double(*other.lenght);
		width = new double(*other.width);
		height = new double(*other.height);
	};
	return *this;
};

Parallelepiped::~Parallelepiped() {
	delete lenght;
	delete width;
	delete height;
};

double Parallelepiped::Area() const  {
	return 2 * (*lenght * *width + *lenght * *height + *width * *height);
};
double Parallelepiped::Volume() const {
	return *height * *width * *lenght;
};