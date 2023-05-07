#include "base.hpp"



int main(int argc, char* argv[])
{
	extern Person* ptrPers;
	extern int gAmountPerson;
	extern int CounterPers;

	cout << "Input amount the persons:";
	cin >> gAmountPerson;

	ptrPers = new Person[gAmountPerson];

	ScopePerson::InputPerson(ptrPers[CounterPers]);
	CounterPers++;
	
	for (int i = 0; i < gAmountPerson; i++)
	{
		ScopePerson::Output(ptrPers[i]);
	}

	return 0;
}