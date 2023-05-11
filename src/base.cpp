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

void ScopePerson::SortPers(vector<Person>& vecPers)
{
	if (vecPers.size() <= 1) return;

	for (int i = 0; i < vecPers.size(); ++i)
	{
		int k = i;

		while (k > 0 && vecPers[k - 1].name > vecPers[k].name)
		{
			std::swap(vecPers[k - 1], vecPers[k]);
			k--;
		}
	}
}

int ScopePerson::searchPerson(const vector<Person>& vecPers, const string& searchName)
{
	for (int i = 0; i < vecPers.size(); ++i)
	{
		if (vecPers[i].name == searchName)
		{
			return i;
		}
	}

	return -1;
}

void ScopePerson::EditPerson(vector<Person>& vecPers,const int index)
{
	cout << "Input Name: ";
	cin >> vecPers[index].name;
	cout << "Input Family: ";
	cin >> vecPers[index].family;
	cout << "Input Address: ";
	cin >> vecPers[index].address;
	cout << "Input age: ";
	cin >> vecPers[index].age;

	cout << "Person was edited!"<<endl;
}

void ScopePerson::DeletePerson(vector<Person>& vecPers, const int index)
{
	vecPers.erase(vecPers.begin() + index);
}