#include <iostream>
using namespace std;

int main()
{
	int array[10];
	int mol[10];
	int different = 0;
	int i,j, temp; 
	
	for(i=0; i<10; i++)
	{
		cin >> array[i];
		mol[i] = array[i]%42;
	}
	
	int save1 = mol[0];
	int save2 = mol[1];
	
	for(i=0; i<10; i++)
	{
		for(j=0; j<9-i; j++)
		{
			if(mol[j]>mol[j+1])
			{
				temp = mol[j+1];
				mol[j+1] = mol[j];
				mol[j] = temp;
			}
		}
	}
	
	for(i=0; i<10; i++)
	{
		if(mol[i] != mol[i+1])
		{
			different ++;
		}
	}
	
	cout << different;
}
