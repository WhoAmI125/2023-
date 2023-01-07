#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int i;
	int count = 1;
	getline(cin, input);
	
	if(input.empty())
	{
		count = 0;
		cout << "0";
		return 0;
	}
	
	for(i=0; i<input.length(); i++)
	{
		if(input.at(i) == ' ')
		{
			count++;
		}
	}
	
	if(input.at(0) == ' ')
	{
		count--;
		
	}
	
	if(input[input.length()-1] == ' ')
	{
		count--;
	}
	
	cout << count;
}