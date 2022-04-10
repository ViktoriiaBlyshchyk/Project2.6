#include "Lorry.h"

int Lorry::counter = 0;

Lorry::Lorry(const string tradeMark, const double enginePower, const double numberOfCylinders, const double carryingAbility)
	: car(tradeMark, enginePower, numberOfCylinders), carryingAbility(carryingAbility)
{
	Lorry::counter++;
}

Lorry::Lorry(const Lorry& l)
{
	car = l.car;
	carryingAbility = l.carryingAbility;
	Lorry::counter++;
}

Lorry::~Lorry(void)
{
	Lorry::counter--;
}

Lorry& Lorry::operator = (const Lorry& l)
{
	car = l.car;
	carryingAbility = l.carryingAbility;

	return *this;
}

Lorry::operator string () const
{
	stringstream ss;
	ss << "Car: " << car << endl;
	ss << "carryingAbility = " << carryingAbility << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Lorry& l)
{
	out << string(l);
	return out;
}

istream& operator >>(istream& in, Lorry& l)
{
	double carryingAbility;
	cout << endl;
	cout << "Car: "; in >> l.car;
	cout << "carryingAbility = "; in >> carryingAbility;

	carryingAbility = l.Change2();
	l.SetCarryingAbility(carryingAbility);

	return in;
}

Lorry& Lorry::operator ++ ()
{
	++car;
	++carryingAbility;
	return *this;
}

Lorry& Lorry::operator -- ()
{
	--car;
	--carryingAbility;
	return *this;
}

Lorry Lorry::operator ++ (int)
{
	Lorry s(*this);
	car++;
	carryingAbility++;
	return s;
}

Lorry Lorry::operator -- (int)
{
	Lorry s(*this);
	car--;
	carryingAbility--;
	return s;
}

int Lorry::getCounter()
{
	return Lorry::counter;
}

double Lorry::Change2()
{
	double y;
	cout << "carryingAbility = "; cin >> y;
	carryingAbility = y;
	return y;
}

int Lorry::Car::counter = 0;

Lorry::Car::Car()
	: tradeMark(""), enginePower(0), numberOfCylinders(0)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const string tradeMark)
	: tradeMark(tradeMark), enginePower(0), numberOfCylinders(0)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const  double enginePower, const  double numberOfCylinders)
	: tradeMark(""), enginePower(enginePower), numberOfCylinders(numberOfCylinders)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const string tradeMark, const double enginePower, const double numberOfCylinders)
	: tradeMark(tradeMark), enginePower(enginePower), numberOfCylinders(numberOfCylinders)
{
	Lorry::Car::counter++;
}

Lorry::Car::Car(const Lorry::Car& c)
	: tradeMark(c.tradeMark), enginePower(c.enginePower), numberOfCylinders(c.numberOfCylinders)
{
	Lorry::Car::counter++;
}

Lorry::Car::~Car(void)
{
	Lorry::Car::counter--;
}

Lorry::Car& Lorry::Car::operator = (const Lorry::Car& c)
{
	this->tradeMark = c.tradeMark;
	this->enginePower = c.enginePower;
	this->numberOfCylinders = c.numberOfCylinders;

	return *this;
}

Lorry::Car::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "tradeMark = " << tradeMark << endl;
	ss << "enginePower = " << enginePower << endl;
	ss << "numberOfCylinders = " << numberOfCylinders << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Lorry::Car& c)
{
	out << string(c);
	return out;
}

istream& operator >> (istream& in, Lorry::Car& c)
{
	string tradeMark;
	double enginePower;
	double numberOfCylinders;

	cout << endl;
	cout << "tradeMark = "; in >> tradeMark;
	cout << "enginePower = "; in >> enginePower;
	cout << "numberOfCylinders = "; in >> numberOfCylinders;
	
	enginePower = c.Change1();
	c.SetTradeMark(tradeMark);
	c.SetEnginePower(enginePower);
	c.SetNumberOfCylinders(numberOfCylinders);

	return in;
}

Lorry::Car& Lorry::Car::operator ++ ()
{
	++enginePower;
	++numberOfCylinders;
	return *this;
}

Lorry::Car& Lorry::Car::operator -- ()
{
	--enginePower;
	--numberOfCylinders;
	return *this;
}

Lorry::Car Lorry::Car::operator ++ (int)
{
	Car t(*this);
	enginePower++;
	numberOfCylinders++;
	return t;
}

Lorry::Car Lorry::Car::operator -- (int)
{
	Car t(*this);
	enginePower--;
	numberOfCylinders--;
	return t;
}

int Lorry::Car::getCounter()
{
	return Lorry::Car::counter;
}

double Lorry::Car::Change1()
{
	double x;
	cout << "enginePower = "; cin >> x;
	enginePower = x;
	return x;
}
