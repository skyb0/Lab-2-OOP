#pragma once

class Priamokutnyk
{
private:
	double* shyr;
	double* vysot;

	void InitPriamokutnyk(double ,double );
public:
	Priamokutnyk();
	Priamokutnyk(double , double );
	Priamokutnyk(const Priamokutnyk& );
	~Priamokutnyk();
	void SetShyr(double value);
	void SetVysot(double value);
	double GetShyr();
	double GetVysot();
	double Perimetr();
	double Squr();
};