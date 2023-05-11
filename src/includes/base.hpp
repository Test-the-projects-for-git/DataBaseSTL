#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
#include<algorithm>

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
	void Output(vector<Person>& vecPers);
	void message(const char* msg);
	void SortPers(vector<Person>& vecPers);
	void EditPerson(vector<Person>& vecPers, const int index);
	int searchPerson(const vector<Person>&vecPers, const string& searchName);
	void DeletePerson(vector<Person>& vecPers,const int index);
	/*function for implement
	4. Read Disc Person
	5. Write Disc Person
	
	*/

}