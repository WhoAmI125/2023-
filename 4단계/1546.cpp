#include <iostream>
using namespace std;

int main()
{
	int num, i;
	float average = 0;
	int M = 0;
	cin >> num;
	float tests[num];
	float new_grade[num];
	
	for(i=0; i<num; i++)
	{
		cin >> tests[i];
		
		if(M<tests[i])
		{
			M = tests[i];
		}
	}
	
	for(i=0; i<num; i++)
	{
		new_grade[i] = (tests[i]/M)*100;
		average += new_grade[i];
	}
	
	cout << average/(float)num;
}
