#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int size = 6; 
	int array[size][size];
	int i;
	long double product, product2, product3;
	//Хз как задать рандомом нецелые числа и
    //как вывести числа с плавающей точкой с округлением
    //Так что пока так
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size;j++) {
			array[i][j] = rand() % 1000;
			printf("%5.i", array[i][j]);
		}
		printf("\n");
		printf("\n");
	}

	i = -2;
	product = 1;
	product2 = 1;
	product3 = 1;
	for (int j = 0; j < size; j++)
	{
		if (j < (1.0 * size / 2))
			i++;
		else if (j > size / 2) i--;
		for (int k = 0; k < size; k++)
		{
			if ((k > i) && (k < size - 1 - i))
			{
				product *= array[j][k];
				if ((k == j) || (k == size - j - 1))
				{
					product2 *= array[j][k];
					product3 *= array[j][k];
				}
				else if (j < (1.0 * size / 2)) product3 *= array[j][k];
				
			}
			else
			{
				product2 *= array[j][k];
				product3 *= array[j][k];
			}

		}
	}
	cout << "First product is " << product << endl;
	cout << "Second product is " << product2 << endl;
	cout << "Third product is " << product3 << endl;





}
