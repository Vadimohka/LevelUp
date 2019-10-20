#include <conio.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[]){
	int x, p, n, copy, temp, newX;
	int numb[6], comb[6];
	std::cin>>x;
	copy = x;
	p = 0;
	n = 0;
	newX = 0;

	while (x > 0){
		numb[n] = x % 10;
		x /= 10;
		n++;
	}

	for (int i = 0; i < n; i++) {
		comb[i] = numb[i];
	}

	for (int i = 0; i < n ;i++) {
		if (comb[i] > comb[i + 1]) {
			temp = comb[i];
			comb[i] = comb[i + 1];
			comb[i + 1] = temp;

			break;
		}
	}

	for(int i = n-1; i >= 0; i--){
		newX += comb[i];
		if (i == 0) {
			break;
		}
		newX *= 10;
	}

	if (newX != copy) {
		std::cout<<newX;
	}
    else std::cout<<"-1";
	getch();
	return 0;
}
