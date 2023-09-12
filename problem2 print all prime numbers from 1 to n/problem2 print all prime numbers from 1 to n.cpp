#include <iostream>
using namespace std;

enum enPrime {Prime, NotPrime};

int readPositiveNumber(string msg)
{
	int num;
	do
	{
		cout << msg << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

enPrime checkPrimeNumber(int num)
{
	if (num == 1 || num == 2)
	{
		return enPrime::Prime;
	}
	for (int i = 2; i < round(num/2) ; i++)
	{
		if ((num % i) == 0)
		{
			return enPrime::NotPrime;
		}
	}
	return enPrime::Prime;
}

void getPrimeNumbersFrom1ToN(int number)
{
	
	cout << "outPut\n";
	for (int i = 1; i <= number; i++)
	{
		if (checkPrimeNumber(i) == enPrime::Prime)
			cout<< i <<endl;
	}
}

int main()
{
	getPrimeNumbersFrom1ToN((readPositiveNumber("Please enter a number?")));
}