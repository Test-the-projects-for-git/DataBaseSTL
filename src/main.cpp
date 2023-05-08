#include "base.hpp"



int main(int argc, char* argv[])
{

	extern int CounterPers;
	extern vector<Person>vecPers;
	extern Person temp;
	extern int Action;
	extern char choose;
	
	cout << std::setw(50) << std::setfill('-') << " Data base" 
		<< std::setw(50) << std::setfill('-') << std::endl;
	do
	{
		system("cls");
		ScopePerson::message("You choose");
		ScopePerson::message("1 add person");
		ScopePerson::message("2 output person");
		cin >> Action;

		if (Action == 1)
		{
			ScopePerson::InputPerson(temp);
			CounterPers++;
			vecPers.push_back(temp);
		}
		else if (Action == 2)
		{
			ScopePerson::Output(vecPers);
		}


		cout << "Repeat the programm y = yes / n = not: ";
		cin >> choose;
	} while (choose != 'n');

	
	return 0;
}