#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	 int a, b, c,a1,b1;
	int k = 0;
	cout << "delimoe ";
	cin >> a1;
	cout << "delitel ";
	cin >> b1;
	if (b1 == 0) { cout << "wrong value b,iput b again,b="; cin >> b1; }
	a = abs(a1);
	b = abs(b1);
	if (a > b) {
		do {
			a -= b;
			k++;
		} while (a > b);
		if (a > b) { k++; c = 0; }
		else c = a;
	}
	else if(a>0) {
		k = 0; c = a;
	}
	else { k = 0; c = 0; }
	if (a1 > 0 && b1 < 0) k = -1 * k;
	if (a1 < 0 && b1 > 0) { k *= -1; c *= -1; }
	
cout << "chastnoe "<< k<<"  ostatok " << c;
		

	return 0;
}