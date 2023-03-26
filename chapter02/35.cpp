#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	const int i = 42;
	auto j = i;
	const auto& k = i;
	auto* p = &i;
	const auto j2 = i, & k2 = i;

	cout << "i is " << typeid(i).name() << "\n";
	cout << "j is " << typeid(j).name() << "\n";
	cout << "k is " << typeid(k).name() << "\n";
	cout << "p is " << typeid(p).name() << "\n";
	cout << "j2 is " << typeid(j2).name() << "\n";
	cout << "k2 is " << typeid(k2).name() << "\n";

	cout << endl;
	cout << boolalpha;

	cout << "i and j have same type? " << is_same<decltype(i), decltype(j)>::value << "\n";
	cout << "i and k have same type? " << is_same<decltype(i), decltype(k)>::value << "\n";
	cout << "i and j2 have same type? " << is_same<decltype(i), decltype(j2)>::value << "\n";
	cout << "j and j2 have same type? " << is_same<decltype(j), decltype(j2)>::value << "\n";
	cout << "k and k2 have same type? " << is_same<decltype(k), decltype(k2)>::value << "\n";

	return 0;
}