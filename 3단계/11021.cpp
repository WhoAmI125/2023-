#include <iostream>
using namespace std;

int main()
{
	int n, i, a, b;
	cin >> n;
	
	for(i=0; i<n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i+1 << ": " << a+b << endl;
	}
}
