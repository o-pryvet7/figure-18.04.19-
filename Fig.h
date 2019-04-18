#pragma once
#pragma once

#include <iostream>
#include <string>
using namespace std;


class figure
{
protected:
	string name;
public:
	figure();
	virtual void Inp(); virtual void Prt();
	virtual double Sqare();
};

