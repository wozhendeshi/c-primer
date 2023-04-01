#include <iostream>
#include <string>
using namespace std;
void swap(int& lhs, int& rhs) {
	auto tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

int main()
{
	for (int left, right; cout << "Please Enter:\n", cin >> left >> right;) {
		swap(left, right);
		cout << left <<" " << right << endl;
	}
}