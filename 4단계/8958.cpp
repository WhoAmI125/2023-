#include <iostream>
using namespace std;

int main()
{
	int num, i, j, k, length;
	int count = 0;
	int n = 1;
	cin >> num;
	
	string array[num];
	
	for(i=0; i<num; i++)
	{
		cin >> array[i];
	}
	
	for(i=0; i<num;i++)
	{
		length = array[i].length();
		for(j=0; j<length; j++)
		{
			if('O' == array[i].at(j))
			{
				count += n;
				n++;
			}
			else if('X' == array[i].at(j))
			{
				n = 1;
			}		
		}
		cout << count << "\n";
		count = 0;
		n = 1;
	}
}
