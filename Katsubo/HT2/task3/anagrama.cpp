﻿// anagrama.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
using namespace std;
int factorial(int);

int main()
{
	setlocale(LC_ALL, "Russian");
	int res = 1, a, i, rasm = 0;
	char ms[8];
	cin >> ms;
	while (ms[rasm] != '\0') {
		rasm++;
	}
	res = factorial(rasm);
	for (i = 0; i < rasm; i++) {
		if (ms[i] == 0) continue;
		a = 1;
		for (int i1 = i + 1; i1 < rasm; i1++) {
			if (ms[i] == ms[i1]) {
				a++;
				ms[i1] = 0;
			}
		}
		a = factorial(a);
		res /= a;
	}
	cout << res << endl;
	return 0;
}

int factorial(int a) {
	int b = 1;
	for (int i = 1; i <= a; i++) b *= i;
	return b;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
