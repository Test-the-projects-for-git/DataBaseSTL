#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::string;

/*sturctures*/
struct Person
{
	string name;
	string family;
	string address;
	int age;
};


/*scope functions*/
namespace ScopePerson
{
	void InputPerson(Person& Pers);
	void Output(Person& Pers);
	bool searchPerson(string& name);
	/*function for implement
	1. Sorted Person by name
	2. Deleted Person
	3. Edit Person
	4. Read Disc Person
	5. Write Disc Person
	6. Search Person by name
	*/

}