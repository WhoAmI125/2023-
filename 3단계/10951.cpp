#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while(1)
	{
		cin >> a >> b;
		if(cin.fail())
		{
			return 0;
		}
		else
		{
			cout << a+b << "\n";
		}
	}
}
