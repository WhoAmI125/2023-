#include <iostream>
using namespace std;

int main()
{
	string A, B;
	string reverse_A, reverse_B;
	int a, b, i, j;
	cin >> A >> B;
	
	for(i=A.length()-1; i>=0; i--)
	{
		reverse_A += A[i];
	}
	for(i=B.length()-1; i>=0; i--)
	{
		reverse_B += B[i];
	}
	
	a = stoi(reverse_A);
	b = stoi(reverse_B);
	
	if(a>b)
	{
		cout << a;
	}
	else if(a<b)
	{
		cout << b;
	}
}