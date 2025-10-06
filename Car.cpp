#include "Car.h"

Car::Car()
{
    marka = "undf";
    colour = "undf";
    bak = 0;
    norm = 0;
}

Car::Car(string marka, string colour, float bak, float norm)
{
    this->marka = marka;
    this->colour = colour;
    this->bak = bak;
    this->norm = norm;
}

void Car::setMarka(string marka)
{
    this->marka = marka;
}

void Car::setColour(string colour)
{
    this->colour = colour;
}

void Car::setBak(float bak)
{
    this->bak = bak;
}

void Car::setNorm(float norm)
{
    this->norm = norm;
}

string Car::getMarka() const
{
    return marka;
}

string Car::getColour() const
{
    return colour;
}

float Car::getBak() const
{
    return bak;
}

float Car::getNorm() const
{
    return norm;
}

float Car::getDistance() const
{
    return (bak/norm)*100;
}

void Car::showInfo() const
{
    cout << "============================================\n";
    cout << "Marka: " << marka << endl;
    cout << "Colour: " << colour << endl;
    cout << "Bak: " << bak << endl;
    cout << "Norm: " << norm << endl;
    cout << "Distance per hour: " << getDistance() << endl;
    cout << "============================================\n";
}
