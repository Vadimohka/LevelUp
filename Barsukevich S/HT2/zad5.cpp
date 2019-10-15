#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	 int a, b, c;
	int k = 0;
	cout << "delimoe ";
	cin >> a;
	while (a == 0) { cout << "wrong value a,input aagain,a="; cin >>a; }
	cout << "delitel ";
	cin >> b;
	while (b == 0) { cout << "wrong value b,input b again,b="; cin >>b; }
	if (a > b) 
		do {
			a -= b;
			k++;
		} while (a > b);
		if (a > b) { k++; c = 0; }
		else c = a;
	}
	else  {
		k = 0; c = a;
	}
	cout << "chastnoe "<< k<<"  ostatok " << c;
		return 0;
}