#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, s, k = 0;
	cout << "Input a,b: \n";
	cin >> a >> b;
	while (a >= b)
	{
		a -= b;
		k++;
	}
	cout << "\n ch = " << k << ", ost = " << a;
}