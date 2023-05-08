#include "base.hpp"


/*global varible and data structure*/
int gAmountPerson;
int CounterPers;
vector<Person> vecPers;

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

//bool ScopePerson::searchPerson(string& name)
//{
//
//}