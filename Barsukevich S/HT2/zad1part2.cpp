#include<iostream>
using namespace std;
int main()
{
	int   k, a1, b; float s = 0,p=1;
	cout << "k=";
    cin>> k;
	
	float** a; 
	a = new float* [k];
	for (int i = 0; i < k; i++)
		a[i] =  new float [k];
	for (int i = 0; i < k; i++)
		for (int j = 0; j < k; j++)
			cin >> a[i][j];
	a1 = 0;
	b = k-1;

	
	for (int j = 0; j < k; j++)
	{
		if (b - a1 >= 0) {
			
			for (int i = 0; i < k; i++)
			{
				if (a1 <= i && i <= b && a1<=b)
				{
					s += a[i][j];
					p *= a[i][j];
				}
			}
		}
		
		else {
            for (int i = 0; i < k; i++)
			{
				if (b <= i && i <= a1)
				{
					s += a[i][j];
					p *= a[i][j];
				}
			}
		}
		
        a1++;
		b--;
	}
	cout << s<<"\t"<<p;
	for (int i = 0; i < k; i++) {
		cout << "\n";
		for (int j = 0; j < k; j++)
			cout << a[i][j] << " ";
	}
	for (int i = 0; i < k; i++)
	  delete[] a[i];
		delete[] a;
	
	return 0;

    }

