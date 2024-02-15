#pragma once
#include "Body.h"
class Parallelepiped: public Body {
private:
	double *lenght, *width, *height;
public:
	Parallelepiped(double *l, double *w, double *h);
	Parallelepiped(const Parallelepiped& other);
	Parallelepiped& operator=(const Parallelepiped& other);
	~Parallelepiped() override;
	double Area() const override;
	double Volume() const override;
};