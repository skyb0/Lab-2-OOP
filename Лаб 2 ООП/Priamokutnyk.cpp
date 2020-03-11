#include "Priamokutnyk.h"
#include <iostream>

using namespace std;

void Priamokutnyk::InitPriamokutnyk(double vysot, double shyr)
{
	this->vysot = new double(vysot);
	this->shyr = new double(shyr);
}

Priamokutnyk::Priamokutnyk(double vysot, double shyr)
{
	cout << "Priamokutnyk::Priamokutnyk(double vysot, double shyr)" << endl;

	if (vysot < 0 || shyr < 0)
	{
		throw ("Incorect value!");
	}
	Priamokutnyk::InitPriamokutnyk(vysot, shyr);
}

Priamokutnyk::Priamokutnyk()
{
	cout << "Priamokutnyk::Priamokutnyk()" << endl;
	Priamokutnyk::InitPriamokutnyk(0, 0);
}

Priamokutnyk::Priamokutnyk(const Priamokutnyk& priamokutnyk)
{
	cout << "Priamokutnyk::Priamokutnyk(const Priamokutnyk& priamokutnyk)" << endl;
	this->vysot = new double(*priamokutnyk.vysot);
	this->shyr = new double(*priamokutnyk.shyr);
}

Priamokutnyk::~Priamokutnyk()
{
	delete[] this->vysot;
	delete[] this->shyr;
	cout << "Priamokutnyk::~Priamokutnyk()" << endl;
}

void Priamokutnyk::SetShyr(double value)
{
	if (value < 0)
	{
		throw ("Incorect value of shyr!");
	}
	*shyr = value;
}

void Priamokutnyk::SetVysot(double value)
{
	if (value < 0)
	{
		throw ("Incorect value of vysot!");
	}
	*vysot = value;
}

double Priamokutnyk::GetShyr()
{
	return *shyr;
}

double Priamokutnyk::GetVysot()
{
	return *vysot;
}

double Priamokutnyk::Perimetr()
{
	return 2 * (*shyr + *vysot);
}

double Priamokutnyk::Squr()
{
	return (*shyr) * (*vysot);
}