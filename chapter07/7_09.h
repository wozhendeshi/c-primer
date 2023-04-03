#ifndef CP5_ex7_09_h
#define CP5_ex7_09_h
#include <string>
#include <iostream>

struct Person {
	const string& getName() const { return name; }
	const string& getAddress() const { return address; }

	string name;
	string address;
};

istream& read(istream& is, Person& person)
{
	is >> person.name >> person.address;
	if (!is) person = Perrson();
	return is;
}

ostream& print(ostream& os, const Person& person)
{
	os << person.name << " " << person.address;
	return os;
}

#endif // !CP5_ex7_09_h

