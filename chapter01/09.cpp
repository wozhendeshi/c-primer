#include <iostream>
using namespace std;
int main()
{
	int sum = 0,val=50;
	while (val <= 100)
	{
		sum += val;
		val++;
	}
	cout << "The sum is"<<" " << sum << endl;
	return 0;
}
//sum from 50 to 100(while),output 3825.