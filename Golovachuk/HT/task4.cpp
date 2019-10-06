//---------------------------------------------------------------------------
#include <conio.h>
#include <tchar.h>
#include <iostream.h>
//---------------------------------------------------------------------------


int _tmain()
{
int N,M,L;
cin >> N >> M >> L;
while (L % N == 0) {
	L-=M;
	if (L<=0) {
	 cout << "No solution";
	 getch();
	 return 0;
	}
}
cout << "you are the winner";
	getch();
	return 0;
}
//---------------------------------------------------------------------------
