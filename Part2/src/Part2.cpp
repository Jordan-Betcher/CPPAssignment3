//============================================================================
// Name        : Part2.cpp
// Author      : Jordan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedStack.h"
using namespace std;

void largeNumbersWithOnlyStack();
LinkedStack<int> addIntStacks(LinkedStack<int> stackOfNumbers1, LinkedStack<int> stackOfNumbers2);
LinkedStack<int> getIntQueueFromString(string largeNumber);
int getNumberFromChar(char character);
void reverseNumber();

int main()
{
	largeNumbersWithOnlyStack();
	return 0;
}

inline void largeNumbersWithOnlyStack()
{
	string largeNumber1;
	string largeNumber2;

	cout << "Enter a very large number: ";
	cin  >> largeNumber1;
	//cout << "Enter a very large number Again: ";
	//cin  >> largeNumber2;


	LinkedStack<int> queueOfNumbers1 = getIntQueueFromString(largeNumber1);
	//LinkedStack<int> queueOfNumbers2 = getIntQueueFromString(largeNumber2);
	//LinkedStack<int> stackOfSum = queueOfNumbers1;
///*
	int number;
	while(!queueOfNumbers1.isEmpty())
	{
		number = queueOfNumbers1.pop();
		cout << number;
	}
//*/
	cout << "End";
	cout << endl;




}

inline LinkedStack<int> getIntQueueFromString(string stringNumber)
{
	LinkedStack<int> stackOfNumbers;

	for(int i = stringNumber.size() - 1; i >= 0; i--)
	{
		char charNumber = stringNumber[i];
		int number = getNumberFromChar(charNumber);
		stackOfNumbers.push(number);
	}
	return stackOfNumbers;
}

inline int getNumberFromChar(char character)
{
	return (character-'0');
}

inline LinkedStack<int> addIntStacks(LinkedStack<int> stackOfNumbers1,
        LinkedStack<int> stackOfNumbers2)
{
	if(stackOfNumbers2.getSize() > stackOfNumbers1.getSize())
	{
		return addIntStacks(stackOfNumbers2, stackOfNumbers1);
	}
	else
	{
		LinkedStack<int> stackOfSum;
		int numberFrom1;

		while(!stackOfNumbers1.isEmpty())
		{
			numberFrom1 = stackOfNumbers1.pop();

			if(!stackOfNumbers2.isEmpty())
			{

			}
			else
			{
				stackOfSum.push(numberFrom1);
			}
		}

		return stackOfSum;
	}
}

inline void reverseNumber()
{
}
