#include <iostream>
using namespace std;

int main ()
{
	int i,location;
	int max = 0;
	int array[9];
	
	for(i=0; i<9; i++)
	{
		cin >> array[i];
	}
	
	for(i=0; i<9; i++)
	{
		if(max<array[i])
		{
			max = array[i];
			location = i+1;
		}
	}
	
	cout << max << "\n" << location;
}
