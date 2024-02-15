#pragma once
class Body {
public:
	virtual double Area() const;
	virtual double Volume() const;
	virtual ~Body();
};