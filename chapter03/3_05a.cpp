#include <iostream>
#include <string>
using namespace std;
int main()
{
	string largeStr;
	string str;
	while (cin >> str) {
		largeStr += str;
	}
	cout << "The concatenated string is " << largeStr << endl;
	return 0;
}