#include <iostream>
#include <ctime>
#include <algorithm>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[]) {

	srand(time(NULL));
	const int N = 5;
	int a[N][N];

	//array
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = rand()%6 + 1;
			printf("%d\t ", a[i][j]);
		}
		std::cout<<"\n";
	}
	std::cout<<"\n";
	//sort
	for (int i = 0; i < N; i++) {
		std::sort(a[i],a[i] + N-i);

	}
	//just check
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t ", a[i][j]);
		}
		std::cout<<"\n";
	}
	std::cout<<"\n";
	system("pause");
	return 0;
}

