//============================================================================
// Name        : ReverseDigitsWithRecursion.cpp
// Author      : Jordan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverseNumbers();
string reverseString(string stringToReverse);

int main()
{
	reverseNumbers();

	return 0;
}

inline void reverseNumbers()
{
	int numberToReverse;

	cout << "Enter a positive number to reverse: ";
	cin  >> numberToReverse;

	while(numberToReverse >= 0)
	{

		string stringToReverse = to_string(numberToReverse);
		cout << reverseString(stringToReverse) << endl;

		cout << "Enter a positive number to reverse: ";
		cin  >> numberToReverse;
	}
}

inline string reverseString(string stringToReverse)
{
	if(stringToReverse.size() <= 1)
	{
		return stringToReverse;
	}
	else
	{
		return reverseString(stringToReverse.substr(1, -1)) + stringToReverse[0];
	}
}
