#pragma once
#include"Fig.h"

class circle : public figure
{
private:
	double R;
public:
	 circle();
	 virtual void Inp(); virtual void Prt();
	 virtual double Sqare();
};

