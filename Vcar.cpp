#include "Vcar.h"

Vcar::Vcar()
{
	vantt = 0;
	all = 0;
}

Vcar::Vcar(string marka, string colour, float bak, float norm, float vantt) :Car(marka, colour, bak, norm)
{
	this->vantt = vantt;
}

void Vcar::countTon(float pricel) 
{
	this->all = (((norm / 100) * pricel) / vantt);
}

float Vcar::getTon() const
{
	return all;
}

void Vcar::showAll() const
{
	Car::showInfo();
	cout << "Price: " << all << endl;
	cout << "--------------------------------------------\n";
}

