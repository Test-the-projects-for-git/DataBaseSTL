#include "base.hpp"


/*global varible and data structure*/
int CounterPers;
int Action;
vector<Person> vecPers;
Person temp;
char choose;

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

void ScopePerson::Output(vector<Person>& vecPers)
{
	for (size_t i = 0; i < vecPers.size(); i++)
	{
		cout << "Person number is [" << i << "]" << endl;
		cout << vecPers[i].name << endl;
		cout << vecPers[i].family << endl;
		cout << vecPers[i].address << endl;
		cout << vecPers[i].age << endl;
	}
}

void ScopePerson::message(const char* msg)
{
	cout << msg << endl;
}

//bool ScopePerson::searchPerson(string& name)
//{
//
//}