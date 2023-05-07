#include "base.hpp"

/*sturctures*/
struct Person
{
	string name;
	string family;
	string address;
	int age;
};

/*global varible*/
int gAmountPerson;
int CounterPers;
Person* ptrPers;

void ScopePerson::InputPerson(Person& Pers)
{
	cout << "Input Name: ";
	cin >> Pers.name;
	cout << "Input Family: ";
	cin >> Pers.family;
	cout << "Input Address: ";
	cin >> Pers.address;
	cout << "Input age: ";
	cin >> Pers.age;

	cout << "Input Ended";
}

void ScopePerson::Output(Person& Pers)
{
	cout << "Name: " << Pers.name << endl;
	cout << "Family: " << Pers.family << endl;
	cout << "Address: " << Pers.address << endl;
	cout << "Age: " << Pers.age << endl;
}