#include <iostream>
using namespace std;

int main()
{
	int num, i, j, k, multi;
	string input;
	string result = "";
	cin >> num;
	
	for(i=0; i<num; i++)
	{
		cin >> multi;
		cin >> input;
		
		for(j=0; j<input.size(); j++)
		{
			for(k=0; k<multi; k++)
			{
				result += input[j];
			}
		}
		cout << result << "\n";
		result = "";
	}
}