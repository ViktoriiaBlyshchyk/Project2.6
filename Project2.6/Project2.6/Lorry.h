#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Lorry
{
private:
	double carryingAbility;
	static int counter;

public:
	class Car
	{
	private:
		string tradeMark;
		double enginePower;
		double numberOfCylinders;
		static int counter;

	public:
		string GetTradeMark() const { return tradeMark; };
		double GetEnginePower()  const { return enginePower; };
		double GetNumberOfCylinders() { return numberOfCylinders; };
		void SetTradeMark(string tradeMark) { this->tradeMark = tradeMark; };
		void SetEnginePower(double enginePower) { this->enginePower = enginePower; }
		void SetNumberOfCylinders(double numberOfCylinders) { this->numberOfCylinders = numberOfCylinders; }

		Car();
		Car(const string tradeMark);
		Car(const double enginePower, const double numberOfCylinders);
		Car(const string tradeMark, const double enginePower, const double numberOfCylinders);
		Car(const Car& c);
		~Car(void);

		Car& operator = (const Car& c);
		operator string () const;

		friend ostream& operator << (ostream& out, const Car& c);
		friend istream& operator >> (istream& in, Car& c);

		Car& operator ++ ();
		Car& operator -- ();
		Car operator ++ (int);
		Car operator -- (int);

		static int getCounter();
		double Change1();
	};

	double GetCarryingAbility() const { return carryingAbility; };
	Lorry::Car GetCar() const { return car; }
	void SetCarryingAbility(double carryingAbility) { this->carryingAbility = carryingAbility; }
	void SetCar(Lorry::Car car) { this->car = car; }

	Lorry(const string tradeMark = "", const double enginePower = 0, const double numberOfCylinders = 0, const double carryingAbility = 0);
	Lorry(const Lorry& l);
	~Lorry(void);

	Lorry& operator = (const Lorry& l);
	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry& l);
	friend istream& operator >> (istream& in, Lorry& l);

	Lorry& operator ++ ();
	Lorry& operator -- ();
	Lorry operator ++ (int);
	Lorry operator -- (int);

	static int getCounter();
	double Change2();

private:
	Car car;
};

