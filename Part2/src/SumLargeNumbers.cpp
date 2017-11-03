//============================================================================
// Name        : SumLargeNumbers.cpp
// Author      : Jordan Betcher
// Date		   : 11/3/2017
// Copyright   :
// Description : Sums two large numbers from input using a stack.
//============================================================================

#include <iostream>
#include "LinkedStack.h"
using namespace std;

void printIntStack(LinkedStack<int> stack);
void sumTwolargeNumbersWithOnlyStack();
LinkedStack<int> sumOfIntStack(LinkedStack<int> stackOfNumbers1, LinkedStack<int> stackOfNumbers2);
LinkedStack<int> getIntStackFromString(string largeNumber);
int getNumberFromChar(char character);

int main()
{
	sumTwolargeNumbersWithOnlyStack();
	return 0;
}

//Sums two large numbers from input using a stack.
inline void sumTwolargeNumbersWithOnlyStack()
{
	string largeNumber1;
	string largeNumber2;

	cout << "Enter a very large number: ";
	cin  >> largeNumber1;

	cout << "Enter a very large number Again: ";
	cin  >> largeNumber2;


	LinkedStack<int> stackOfNumbers1 = getIntStackFromString(largeNumber1);
	LinkedStack<int> stackOfNumbers2 = getIntStackFromString(largeNumber2);
	LinkedStack<int> stackOfSum = sumOfIntStack(stackOfNumbers1, stackOfNumbers2);

	printIntStack(stackOfSum);

	cout << endl;
}

//Returns a stack of numbers from a stack of strings that are numbers
inline LinkedStack<int> getIntStackFromString(string stringNumber)
{
	LinkedStack<int> stackOfNumbers;

	for (int i = 0; i < stringNumber.size(); i++)
	{
		char charNumber = stringNumber[i];
		int number = getNumberFromChar(charNumber);
		stackOfNumbers.push(number);
	}

	return stackOfNumbers;
}

//Gets the number from character by minus-ing the 0 value character
inline int getNumberFromChar(char character)
{
	return (character - '0');
}

//Returns the sum of two stacks
inline LinkedStack<int> sumOfIntStack(LinkedStack<int> stackOfNumbers1,
        LinkedStack<int> stackOfNumbers2)
{
	if (stackOfNumbers2.getSize() > stackOfNumbers1.getSize())
	{
		return sumOfIntStack(stackOfNumbers2, stackOfNumbers1);
	}
	else
	{
		LinkedStack<int> stackOfSum;
		int numberFrom1;
		int carryOver = 0;

		while ( ! stackOfNumbers1.isEmpty())
		{
			numberFrom1 = stackOfNumbers1.pop();
			int sum = 0;

			if(!stackOfNumbers2.isEmpty())
			{
				int numberFrom2 = stackOfNumbers2.pop();
				sum = numberFrom1 + numberFrom2;
			}
			else
			{
				sum = numberFrom1;
			}

			sum += carryOver;
			carryOver = 0;

			if (sum >= 10)
			{
				sum = sum % 10;
				carryOver++;
			}

			stackOfSum.push(sum);
		}

		if (carryOver > 0)
		{
			stackOfSum.push(carryOver);
		}

		return stackOfSum;
	}
}

//Prints the stack of ints
inline void printIntStack(LinkedStack<int> stack)
{
	int number;
	while ( ! stack.isEmpty())
	{
		number = stack.pop();
		cout << number;
	}

	cout << endl;
}
