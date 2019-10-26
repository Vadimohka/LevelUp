#include <iostream>   //индивид 2
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	double s = 0, m = 0;
	cout << "Type propotions of the matrix - ";
	cin >> n;
	const int a = n;
	double nums[a][a];
	cout << "Fill it:\n";
	for (int i = 0 ; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> nums[i][j];
		}
		cout << endl;
	}
	for (int i = 0 ; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << nums[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int t = 0;
	int k = a;
	for (int i = 0; i < a; i++) {
		for (int j = t; j < k; j++) {
			s += nums[i][j];
		}
		if (i + 1 < (double) n / 2) {
			t++;
			k--;
		} else if (i + 1 > (double) n / 2){
			t--;
			k++;
		} else if (i + 1 == (double) n / 2){
			continue;
		}
	}
	cout << "S[1] = " << s << endl;
	s = t = 0;
	k = a - 1;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (j >= k || j <= t) {
				s += nums[i][j];
			}
		}
		if (i + 1 < (double) n / 2) {
			t++;
			k--;
		} else if (i + 1 > (double) n / 2){
			t--;
			k++;
		} else if (i + 1 == (double) n / 2){
			continue;
		}

	}
	cout << "S[2] = " << s << endl;
	s = t = 0;
	k = a - 1;
	for (int i = 0; i < a; i++) {
		if (i + 1 < (double) n / 2) {
			for (int j = 0; j < a; j++) {
				if (j >= k || j <= t) {
					s += nums[j][i];
				}
			}
			t++;
			k--;
		} else {
			for (int j = 0; j < a; j++) {
				s += nums[i][j];
			}
		}

	}
    cout << "S[3] = " << s;
	getch();
	return 0;
}
