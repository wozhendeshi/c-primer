#include <iostream>
#include <string>
using namespace std;
bool hasUppercase(const string& str)
{
	for (auto c : str)
		if (isupper(c)) return true;
	return false;
}

const string& makelowercase(string& str)
{
	for (auto& c : str)
		if (isupper(c)) c = tolower(c);
	return str;
}

int main()
{
	string str("Hello World!");
	cout << boolalpha << hasUppercase(str) << endl;
	cout << makelowercase(str) << endl;
}