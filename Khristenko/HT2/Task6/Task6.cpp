#include <iostream>   //6
#include <math.h>
#include <conio.h>

using namespace std;


int main()
{
	int x, temp, n, changes = 0, ch1 = 0, ch2 = 0;
	ch1 = ch2 = 0;
	n = changes = 0;
	cout << "X = ";
	cin >> x;  //ввод икс
	if (x < 1 || x >= pow(10, 6)) { //проверка существования
		x = 2;
	}
	temp = x;
	while (temp > 0) // вычисление кол-ва цифр для инициализации массива
	{
		n++;
		temp /= 10;
	}
	const int a = n;
	int chislo[a], new_chis[a]; //инициализация массивой введенного числа и наим.
	for (int i = 0; i < a; i++) { //заполнение массивов
	chislo[a - i - 1] = x % 10;
	new_chis[a - i - 1] = chislo[a - i - 1];
	x /= 10;
	}
	if (a == 2) {  //единственное решение для числа с двумя цифрами
		temp = new_chis[0];
		new_chis[0] = new_chis[1];
		new_chis[1] = temp;
	} else if (a > 2) {
		for (int k = a - 1; k > 0; k--) {
			if (new_chis[k] > new_chis[k - 1] && k - 1 > 0 ) {
				temp = new_chis[k];
				new_chis[k] = new_chis[k - 1];
				new_chis[k - 1] = temp;
				changes++;
			}
			if (changes != 0) {
			break;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		ch1 += chislo[i]*pow(10, a - i - 1);
		ch2 += new_chis[i]*pow(10, a - i -1);
	}
	if (ch1 >= ch2) {
		cout << -1;
	} else {
		for (int i = 0; i < a; i++) cout << new_chis[i];
	}
	cout << endl;
	getch();
	return 0;
}
