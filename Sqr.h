#pragma once
#include"Fig.h"

class square : public figure
{
private:
	double a;
public:
	square();
	virtual void Inp(); virtual void Prt();
	virtual double Sqare();
};

