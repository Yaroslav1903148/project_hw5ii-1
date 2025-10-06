#include <iostream>
#include "Car.h"
#include "Vcar.h"
using namespace std;
int main()
{
	Car car("BMW", "Black", 500, 200);
	car.showInfo();

	Vcar car1("Mercedec", "Blue", 1000, 300, 100);
	car1.countTon(60);
	car1.showAll();
}

