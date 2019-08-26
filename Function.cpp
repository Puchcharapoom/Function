#include<iostream>
#include<time.h>
void checkNum(int, int);
using namespace std;
int main()
{ 	
	int Number;
	srand(time(NULL));
	int Random;
	Random= rand() % 10 + 1;
	cout << "### Welcome to guessing number game ### \n";
	cout << "Secret number has been chosen\n";
	do {

		cout << "Guess the number(1 to 10) : ";
		cin >> Number;
		checkNum(Number, Random);
	} while (Number != Random);
	
}
void checkNum(int Number, int Random)
{
	if (Random < Number)
	{
		cout << "The secret number is lower\n";
	}
	else if (Random == Number)
	{
		cout << "Congratulations.\n";
	}
	else cout << "The secret number is higher\n";

	
}
