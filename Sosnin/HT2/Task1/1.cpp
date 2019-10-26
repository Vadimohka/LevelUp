#include <iostream>
#include <ctime>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[]) {

	srand(time(NULL));
	const int N = 5;
	int k, s1, s2, s3, m1, m2, m3, a[N][N], b[N][N] = {0} ;
	s1 = 0;
	s2 = 0;
	s3 = 0;
	m1 = 1;
	m2 = 1;
	m3 = 1;
	k = round( N / 2);

	   //array
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = rand()%2 + 1;
			printf("%d\t ", a[i][j]);
		}
		std::cout<<"\n";
	}

	std::cout<<"\n";

	//array1
	std::cout<<"array1\n" ;

	for (int i = 0; i < k ; i++)
		for (int j = i; j <= N - 1 - i; j++){
			b[i][j]= a[i][j];
			s1 += b[i][j];
			m1 *= b[i][j];
		}

	for (int i = N - 1; i >= k ; i--)
		for (int j = N - 1 - i; j <= i; j++){
			b[i][j]= a[i][j];
			s1 += b[i][j];
			m1 *= b[i][j];
		}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t ", b[i][j]);
		}
		std::cout<<"\n";
	}

	std::cout<<"\n";
	std::cout<<"s1 = "<<s1<<"\tm1 = "<<m1<<'\n';
	//b[N][N] = {0};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			b[i][j] = 0;
		}
	}

	//array2
	std::cout<<"\narray2\n";

	for (int i = 0; i < k ; i++)
		for (int j = i; j <= N - 1 - i; j++){
			b[j][i] = a[j][i];
			s2 += b[j][i];
			m2 *= b[j][i];
		}

	for (int i = N - 1; i >= k ; i--)
		for (int j = N - 1 - i; j <= i; j++){
			b[j][i]= a[j][i];
			s2 += b[j][i];
			m2 *= b[j][i];
		}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t ", b[i][j]);
		}
		std::cout<<"\n";
	}

	std::cout<<"\n";
	std::cout<<"s2 = "<<s2<<"\tm2 = "<<m2<<'\n';

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			b[i][j] = 0;
		}
	}

	//array3
	std::cout<<"\narray3\n";

	for (int i = 0; i < k ; i++)
		for (int j = i; j <= N - 1 - i; j++){
			b[j][i] = a[j][i];
			s3 += b[j][i];
			m3 *= b[j][i];
		}

	for (int i = N - 1; i >= k ; i--)
		for (int j = N - 1 - i; j <= i; j++){
			b[j][i]= a[j][i];
			s3 += b[j][i];
			m3 *= b[j][i];
		}

	for (int i = N - 1; i >= k ; i--)
		for (int j = N - i; j < i; j++){
			b[i][j]= a[i][j];
			s3 += b[i][j];
			m3 *= b[i][j];
		}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d\t ", b[i][j]);
		}
		std::cout<<"\n";
	}

	std::cout<<"\n";
	std::cout<<"s3 = "<<s3<<"\tm3 = "<<m3<<'\n';

	system("pause");
	return 0;
}
