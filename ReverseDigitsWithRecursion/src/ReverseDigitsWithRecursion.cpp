//============================================================================
// Name        : ReverseDigitsWithRecursion.cpp
// Author      : Jordan Betcher
// Date        : 11/3/2017
// Copyright   :
// Description : Takes positive numbers from input and reverses them
//============================================================================

#include <iostream>
using namespace std;

void reverseNumbers();
string reverseNumbers(int numbersToReverse);
string reverseString(string stringToReverse);

int main()
{
	reverseNumbers();

	return 0;
}

//Takes a number from input and reverses it
inline void reverseNumbers()
{
	int numberToReverse;

	cout << "Enter a positive number to reverse: ";
	cin  >> numberToReverse;

	while(numberToReverse >= 0)
	{
		cout << reverseNumbers(numberToReverse) << endl;

		cout << "Enter a positive number to reverse: ";
		cin  >> numberToReverse;
	}
}

//Takes a number and reverses it, returning it as a string
inline string reverseNumbers(int numbersToReverse)
{
	string stringToReverse = to_string(numbersToReverse);
	string reverseNumbers = reverseString(stringToReverse);
	return reverseNumbers;
}

//Reverses a string using recursion
inline string reverseString(string stringToReverse)
{
	if (stringToReverse.size() <= 1)
	{
		return stringToReverse;
	}
	else
	{
		return reverseString(stringToReverse.substr(1, -1)) + stringToReverse[0];
	}
}
