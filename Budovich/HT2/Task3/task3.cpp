#include <iostream>
#include <cctype>
using namespace std;

int fact(int x) {

	int res;

	res = 1;
	for (int j = 1; j <= x; j++) {
		res = res * j;
	}
	return res;
}
int main()
{
	char word[8];
	char sieg, changer;
	int i = 0;
	int j = 0;
	int wordsize, wordsize2;
	int repeatletters[7]{ 1,1,1,1,1,1,1 };
    cout << "Enter word using only latin letters. Print 0 to finish before.\n";
	while (i<7) {
		cin>>sieg;
		if (isalpha(sieg)) {
			word[i] = sieg;
			i++;
		}
		if (sieg == '0')
		{
			wordsize = i;
			break;
		}
		else wordsize = 7;
		}
	wordsize2 = wordsize;
	



    i = 0;
	while(i<wordsize2){
		j = i+1;
		while (j < wordsize2) {
			if (word[i] == word[j]) {
				repeatletters[i]++;
				changer = word[wordsize2-1];
				word[wordsize2 -1] = word[j];
				word[j] = changer;
				wordsize2--;
			}
			else j++;
		}i++;
		}

		i = fact(wordsize);
		for (int k = 0; k < wordsize; k++)
			i /= fact(repeatletters[k]);
		cout << "Amount of annograms is " << i;

	}


