#include "Lorry.h"
#include <iostream>

using namespace std;

int main()
{
	Lorry l, l1;
	cin >> l1;
	cout << l1 << endl;

	l = ++l1;
	cout << l << endl;
	cout << l1 << endl;

	cout << "Lorry : " << Lorry::getCounter() << endl;
	cout << "Lorry::Car : " << Lorry::Car::getCounter() << endl;
	
	Lorry::Car c1;
	cout << "Lorry::Car +1 : " << Lorry::Car::getCounter() << endl;
	{
		Lorry l2("Ford", 500, 6, 2000);
		cout << "Lorry local : " << Lorry::getCounter() << endl;
		cout << "Lorry::Car local : " << Lorry::Car::getCounter() << endl;

		Lorry::Car c1;
		cout << "Lorry::Car local +1 : " << Lorry::Car::getCounter() << endl;
	}

	cout << "Lorry : " << Lorry::getCounter() << endl;
	cout << "Lorry::Car : " << Lorry::Car::getCounter() << endl;


	return 0;

}