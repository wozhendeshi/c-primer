#include <iostream>
using namespace std;
int LargeOne(int i, const int* const ip) {
	return (i > *ip) ? i : *ip;
}

int main() {
	int c = 6;
	cout << LargeOne(7, &c) << endl;
}