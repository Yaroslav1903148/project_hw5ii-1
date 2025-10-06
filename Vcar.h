#pragma once
#include "Car.h"
class Vcar : public Car
{
protected:
	float vantt;
	float all;
public:
	Vcar();
	Vcar(string marka, string colour, float bak, float norm, float vantt);
	void countTon(float pricel);
	float getTon()const;
	void showAll()const;


};

