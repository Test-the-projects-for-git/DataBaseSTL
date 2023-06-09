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
		ScopePerson::message("3 sort person");
		ScopePerson::message("4 Edit Person");
		ScopePerson::message("5 Remove Person");
		ScopePerson::message("6 Write data on disc");
		ScopePerson::message("7 Read data from disc");
		ScopePerson::message("0 Exit the programm");
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
		else if (Action == 3)
		{
			ScopePerson::SortPers(vecPers);
		}
		else if (Action == 4)
		{
			string name("");
			cout << "Enter the name Person: ";
			cin >> name;
			int index = ScopePerson::searchPerson(vecPers, name);
			if (index == -1)
			{
				cout << "Person with name not exist!" << endl;
			}
			else
			{
				cout << "Person was found!" << endl;
				ScopePerson::EditPerson(vecPers, index);
			}
		}
		else if (Action == 5)
		{
			/*code is repeat */
			string name("");
			cout << "Enter the name Person: ";
			cin >> name;
			int index = ScopePerson::searchPerson(vecPers, name);
			if (index == -1)
			{
				cout << "Person with name not exist!" << endl;
			}
			else
			{
				cout << "Person was found!" << endl;
				ScopePerson::DeletePerson(vecPers, index);
			}
		}
		else if (Action == 6)
		{
			ScopePerson::WriteDisc(vecPers);
		}
		else if (Action == 7)
		{
			ScopePerson::ReadDisc(vecPers);
		}
		else if (Action == 0)
		{
			exit(0);
		}

		cout << "Repeat the programm y = yes / n = not: ";
		cin >> choose;
	} while (choose != 'n');


	return 0;
}