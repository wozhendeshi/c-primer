#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;
void swap(int* const lhs, int* const rhs) {
	auto tmp = *lhs;
	*lhs = *rhs;
	*rhs = tmp;
}
int main() {
	for (int lht, rht; cout << "Please Enter:\n", cin >> lht >> rht;) {
		swap(&lht, &rht);
		cout << lht << " " << rht << endl;
	}
	return 0;
}
