#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	int a, b, c, sc = 4 ;
	if( !scanf("%d" , &a) ) return 1;

	while (1){
		cout<<"b = ";
		if( !scanf("%d" , &b) ) return 1;
		if (b == 0) {
			cout<<"cannot be divided by zero. do you remember math? Change this shit.\n";
			continue;
		}
		else break;
	}

	c = 0;
	//cout<<"\nstart\n";
	if ( (a < 0) && (b < 0) ) {
		sc = 0;
	}
	else if (a < 0) {
			sc = 1;
		 }
		 else if (b < 0) {
				  sc = 2;
			  }
	switch (sc) {

		case 0 :{
			while (1){
				if (a <= b) {
				a -= b;
				c++;
				}
				else {break;}
			}
			break;
		}

		case 1 :{
			while (1){
				if (a <= b * (-1) ) {
				a += b;
				c--;
				}
				else {break;}
			}
			break;
		}

		case 2:{
			while (1){
				if ( (a * (-1) ) <= b) {
				a += b;
				c--;
				}
				else {break;}
			}
			break;
		}

		default:{
			while (1){
				if (a >= b) {
				a -= b;
				c++;

				}
				else {break;}
			}
		}
	}

	cout<<"rest = "<< a <<endl;
	cout<<"quotient = "<< c <<endl;
	cout<<"end";
	getch();
	return 0;
}
