#include <iostream>
using namespace std;

int main()
{
	int i;
	int total = 0;
	string input;
	cin >> input;
	
	int number[input.size()];
	
	for(i=0; i<input.size(); i++)
	{
		if(input.at(i) == 'A')
		{
			number[i] = 3;
		}
		else if(input.at(i) == 'B')
		{
			number[i] = 3;
		}
		else if(input.at(i) == 'C')
		{
			number[i] = 3;
		}
		else if(input.at(i) == 'D')
		{
			number[i] = 4;
		}
		else if(input.at(i) == 'E')
		{
			number[i] = 4;
		}
		else if(input.at(i) == 'F')
		{
			number[i] = 4;
		}
		else if(input.at(i) == 'G')
		{
			number[i] = 5;
		}
		else if(input.at(i) == 'H')
		{
			number[i] = 5;
		}
		else if(input.at(i) == 'I')
		{
			number[i] = 5;
		}
		else if(input.at(i) == 'J')
		{
			number[i] = 6;
		}
		else if(input.at(i) == 'K')
		{
			number[i] = 6;
		}
		else if(input.at(i) == 'L')
		{
			number[i] = 6;
		}
		else if(input.at(i) == 'M')
		{
			number[i] = 7;
		}
		else if(input.at(i) == 'N')
		{
			number[i] = 7;
		}
		else if(input.at(i) == 'O')
		{
			number[i] = 7;
		}
		else if(input.at(i) == 'P')
		{
			number[i] = 8;
		}
		else if(input.at(i) == 'Q')
		{
			number[i] = 8;
		}
		else if(input.at(i) == 'R')
		{
			number[i] = 8;
		}
		else if(input.at(i) == 'S')
		{
			number[i] = 8;
		}
		else if(input.at(i) == 'T')
		{
			number[i] = 9;
		}
		else if(input.at(i) == 'U')
		{
			number[i] = 9;
		}
		else if(input.at(i) == 'V')
		{
			number[i] = 9;	
		}
		else if(input.at(i) == 'W')
		{
			number[i] = 10;		
		}
		else if(input.at(i) == 'X')
		{
			number[i] = 10;	
		}
		else if(input.at(i) == 'Y')
		{
			number[i] = 10;		
		}
		else if(input.at(i) == 'Z')
		{
			number[i] = 10;	
		}
	}
	
	for(i=0; i<input.size(); i++)
	{
		total += number[i];
	}
	cout << total;
	
}