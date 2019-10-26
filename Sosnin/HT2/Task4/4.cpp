#include <conio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){

	int n = 0, k = 0, max;
	char c, t;
	char *s = new char[80];
	int *amount = new int [80];

	while (n < 80){

		s[n] = getch();
		cout<<s[n];

		if (s[n] == 8 ) {
			cout<<" ";
			n--;
			cout<<"\b \b";
			continue;
		}

		if (s[n] == 13) {
			break;
		}
			else n++;

	}

	for (int i = 0; i < n; i++) {
		amount[i] = 0;
		for (int j = i; j < n; j++) {

			if ( (s[i] == s[j]) && (s[i] != ' ') ) {
				amount[i]++;
				continue;
			}
			else break;
		}
		k++;
	}

	cout<<endl;

	for (int i = 0; i < n; i++) {
		cout<<amount[i]<<' ';
	}
	cout<<endl;
	max = 0;

	for (int i = 0; i < k; i++) {
		if (max < amount[i]) {
			max = amount[i];
			c = s[i];
		}
	}

	delete []s;
	delete []amount;

	cout<<"winner:"<<c<<"  "<<max<<endl;
	system("pause");
	return 0;
}
