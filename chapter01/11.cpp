#include <iostream>
using namespace std;
int main()
{
	int small = 0, big = 0;
	cout << "Please input two integers." << endl;
	cin >> small >> big ;
	if (small > big)
	{
		int temp = small;
		small = big;
		big = temp;
	}
	while (small <= big)
	{
		cout << small << endl;
		small++;
	}
	return 0;
}
//print the integers between small and big.