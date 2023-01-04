#include <iostream>
using namespace std;

int main()
{
	int input, num[2], first, second, calc[2];
	int count = 0;
	
	cin >> input;
	num[0] = input/10;
	num[1] = input%10;
	calc[0] = num[0];
	calc[1] = num[1];
	
	while(1)
	{
		first = num[0];
		second = num[1];
		num[1] = first + second;
		if(num[1] >= 10)
		{
			num[1] -= 10;
		}
		num[0] = second;
		count++;
		
		if(num[0] == calc[0] && num[1] == calc[1])
		{
			cout << count;
			return 0;
		}
	}
}
