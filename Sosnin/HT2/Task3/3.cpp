#include <conio.h>
#include <iostream>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[]){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char  word[7];
	int fact = 1, ans, n = 0, k = 1, a[7] = {0};
	//write
	while (n < 7){

		word[n] = getch();
		std::cout<<word[n];


		if (word[n] == 8 ) {
			printf(" ");
			n--;
			printf("\b \b");
			continue;
		}

		if (word[n] == 13) {
			break;
		}
			else n++;
	}
	//hard calculation
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	std::cout<<"\n";
	ans = fact;

	for (int i = 0 ; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (word[i] == word[j]) {
				a[i] ++;
			}
		}
		ans /= a[i];
	}

	printf("%d\n" , ans);
	system("pause");
	return 0;
}
