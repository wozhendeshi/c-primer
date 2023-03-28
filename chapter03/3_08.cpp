#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str("a simple string");
	decltype(str.size()) i = 0;

	while (i < str.size()) {
		str[i] = 'X';
		++i;
	}
	cout << str << endl;

	for (i = 0; i < str.size(); ++i) str[i] = 'Y';
	cout << str << endl;

	return 0;
}