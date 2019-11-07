#include<iostream>
using namespace std;
int main()
{
	int   m, n, a1, f = 0, b = 0,j;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;
	float** a;
	a = new float* [m];
	for (int i = 0; i < m; i++)
		a[i] = new float[n];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++) {
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << "\t";
	}
	cout <<"\n \n";
	a1 = n;
	for (int i = 0; i < m; i++) {
		b += a1;
		a1--;
	}
	float* d = new float[b];
	
	int n1 = n;
	if (m != n) n1--;
	for (int i = 0; i < m; i++) {
		
for (j = -1 + n1--; j >= 0; j--)
			d[f++] = a[i][j];
	}

	for(int i=0;i<f;i++)
		for (j=0;j<f;j++) 
			if (d[i] > d[j]) { d[i] = d[i] +d[j]; d[j] = -d[j] + d[i]; d[i] = -d[j] + d[i]; }
	for (int i = 0; i < f; i++)
		cout << d[i] << " ";
	cout << "\n" "-----------------------------" ;
	f = 0; n1 = n; if (m != n) n1--;
	for (int i = 0; i < m; i++) {
		
		for (j = 0; j <n1; j++)
			  a[i][j]= d[f++];
		n1--;
	}
	
	for (int i = 0; i < m; i++) {
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << "\t";
	}
	
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;

	delete[] d;
	return 0;

}
