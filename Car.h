#pragma once
#include <iostream>
#include <string>
using namespace std;
class Car
{
protected:

	string marka;
	string colour;
	float bak;
	float norm;
public:
	Car();
	Car(string marka, string colour, float bak, float norm);

	void setMarka(string marka);
	void setColour(string colour);
	void setBak(float bak);
	void setNorm(float norm);

	string getMarka()const;
	string getColour()const;
	float getBak()const;
	float getNorm()const;
	float getDistance()const;

	void showInfo()const;


};

