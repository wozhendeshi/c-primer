#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<int> ivec1(10, 42);
	vector<int> ivec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	vector<int> ivec3;
	for (auto i = 0; i != 10; i++) {
		ivec3.push_back(i);
	}
	cout << "The first approach is better!" << endl;
	return 0;
}