//5. Створити клас – прямокутник.
//У закритій частині описати поля : висоту і ширину.
//Визначити конструктор, деструктор, функції зміни значень полів та отримання їхніх значень, 
//обчислення площі, периметру, виведення полів класу.
//Функції зміни значень полів класу повинні перевіряти коректність параметрів, що задаються.

#include <iostream>
#include "Priamokutnyk.h"

using namespace std;

void PrintPriam(Priamokutnyk);

int main()
{
	setlocale(LC_CTYPE, "ukr");
	try
	{
		Priamokutnyk* pr1 = new Priamokutnyk();
		pr1->SetShyr(5.6);
		pr1->SetVysot(5.5);
		PrintPriam(*pr1);
		cout << endl;
		Priamokutnyk* pr2 = new Priamokutnyk(2, 4);
		PrintPriam(*pr2);
		cout << endl;


		Priamokutnyk* pr4 = new Priamokutnyk(*pr1);
		PrintPriam(*pr4);
		cout << endl;

		delete pr1;
		delete pr2;
		delete pr4;
	}
	catch (const char* message)
	{
		cout << "Error:" << message;
	}
	
}

void PrintPriam(Priamokutnyk obj)
{
	cout << "Висота: " << obj.GetVysot() << " Ширина: " << obj.GetShyr();
	cout << " Периметр: " << obj.Perimetr()<< " Площа: " << obj.Squr() << endl;
}