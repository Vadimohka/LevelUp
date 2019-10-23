#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdio>
using namespace std;

int MASSIVE(char *str, int n)
{
	int k, t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (str[i] == str[j]) {
				char temp = str[n - 1];
				str[n - 1] = str[j];
				str[j] = temp;
				n--;
			}
		}
	}
	return n;
}

int main()
{
	int n;
	cout << "Type lenght of the massive = ";
	cin >> n;
	char *str = new char [n + 1];
	cout << "Fill it:\n";
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}
	cout << endl;
    cout << MASSIVE(str, n);
	getch();
	return 0;
}
