#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "Enter a string of characters including punctuation. " << endl;
	while (getline(cin, s)) {
		for  (auto i:s)
			if (!ispunct(i)) cout << i;
		cout << endl;
	}
	return 0;
}