#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num, students, i, j;
	float average = 0;
	int count = 0;
	float percentage;
	cin >> num;
	
	for(i=0; i<num; i++)
	{
		cin >> students;
		float array[students];
		for(j=0; j<students; j++)
		{
			cin >> array[j];
			average += array[j];
		}
		average = (float)average/students;
		
		for(j=0; j<students; j++)
		{
			if(array[j] > average)
			{
				count++;
			}
		}
		percentage = (float)count/students*100;
		cout << fixed;
        cout << setprecision(3);
		cout << percentage << "%" << "\n";
		count = 0;
		average = 0;
	}
}
