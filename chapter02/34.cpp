//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 0, & r = i;
//	auto a = r;  //the type of a is int.
//
//	const int ci = i, & cr = ci;
//	auto b = ci;  //the type of b is int.
//	auto c = cr;  //the type of c is int.
//	auto d = &i;  //the type of d is int*.
//	auto e = &ci;  //the type of e is const int*.
//
//	const auto f = ci;  //the type of f is const int.
//	auto& g = ci;  //the type of g is const int &.
//
//	a = 42;
//	b = 42;
//	c = 42;
//	*d = 42;
//	e = &c;
//	return 0;
//}
