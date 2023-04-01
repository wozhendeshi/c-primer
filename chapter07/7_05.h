#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h
#include <string>
using namespace std;
class Person {
	string name;
	string address;

public:
		const string& getName() const { return name; }
		const string& getAddress() const { return address; }
};
#endif // !CP5_ex7_05_h

