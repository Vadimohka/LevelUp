//---------------------------------------------------------------------------

#pragma hdrstop

#include <tchar.h>
#include <conio.h>
#include <iostream.h>
//---------------------------------------------------------------------------
  using namespace std ;
#pragma argsused
int _tmain(int argc, _TCHAR* argv[])
{
int N,M,L;
cin >> N;
cin >> M;
cin >> L;
 if (N != 0) {
	 if (M != 0 ) {
		 if (L != 0) {
			 if (L % N == 0) {
				 cout << "Go forward";
				 }
				 else do {
					   L -= M;
				}
					   while (L % N == 0);
							   cout << "Eps";
		 }
			else  {
					 N*=M;
					 cout << N;
			}
	 }
	 else {
		 if (L > 0) {
			 cout << "Yes";
		 }
		 else if (L < 0) {
			 cout << "Nothing";
		 }
		 else  cout << "000";
	 }
 }
 else if (M == 0)  {
		  if (L<0) {
		  cout << "cant be";
		  }
		  else if (L>0) {
			cout << "Can be";
		  }
		else {
			   cout << "0 (N!=0)";
		}
			  } else  {
						 if (L % M == 0) {
							 cout << "All right";
						 } else cout << "Error";
					 }


	getch();
	return 0;
}
//---------------------------------------------------------------------------
