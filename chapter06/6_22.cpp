#include <iostream>
using namespace std;
void swap(const int*& lhs, const int*& rhs) {
	auto temp = lhs;
	lhs = rhs;
	rhs = temp;
}

int main() {
	const int i = 42, j = 99;
	auto lhs = &i;
	auto rhs = &j;
	swap(lhs, rhs);
	cout << *lhs << " " << *rhs;
}