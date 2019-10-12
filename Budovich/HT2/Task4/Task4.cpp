#include <iostream>
#include <ctype.h>

using namespace std;
int main()
{
	char str[81];
	int maxlength[40];
	int i = 0;
	int k = 0;
	int max = 0;
	int max1 = 0;
	gets_s(str);
	for (int j = 0;j < 40;j++) maxlength[j] = 0;
	
	while (str[i] != '\0') //Преобразовывает все небуквы в пробелы
	{
		if (!isalpha(str[i])) 
		{
			str[i] = ' ';
			k++;
     	}
		else 
			maxlength[k]++;
		if (maxlength[k] > max1) { max1 = maxlength[k]; max = k; }

		i++;
	}
	
		if (max == 0) {
			for (int k = 0;k <= max1;k++) 
			cout << str[k];
		}
		else
		{
			int h = 0;
			for (int k = 0; k <= i;k++) {
				if (str[k] == ' ') h++;
				if (h == max) {
					cout << str[k];
				}
			}
		}
		cout << " is the first longest.";
	
}

