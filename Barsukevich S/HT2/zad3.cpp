#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1, b = 0, b1, a1 = 1, min, x, y = 0, mins, mins0=0; bool f = 1;
	int k = 0;
	cout << "x= ";
	cin >> x;
	x1 = x;
	while (x1 > 0)
	{
		x1 /= 10;
		b++;
	}
	x1 = x;
	b1 = b;
	for (int j = 0; j < b; j++)
	{
		int* a = new int[b];
		for (int i = 0; i < b; i++)
		{
			a[i] = x1 % 10;
			x1 /= 10;
		}
		min = a[0];
		x1 = x;
		for (int i =  1+b-b1--; i < b; i++)
		{
			if (a[j] > a[i]) {
				a[i] = a[i] + a[j]; a[j] = -a[j] + a[i]; a[i] = -a[j] + a[i];  f = 0;  
				for (k = 0; k < i; k++)
					for (int l = k; l < i; l++) 
						if (a[k] < a[l]) { a[l] = a[l] + a[k]; a[k] = -a[k] + a[l]; a[l] = -a[k] + a[l]; }
				for (int i = 0; i < b; i++)
					y += pow(10, i) * a[i];
				if (y > x)
					mins0 = y ;
				if (a1 == 1) { mins = y ; a1++; }
				if (mins > mins0) mins = mins0;
			}
		}
		delete[] a;
	}
cout << "\n" ;
	if (!f)cout << "x1=" << mins;
	else cout << "-1";

	return 0;
}