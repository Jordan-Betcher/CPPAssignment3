//============================================================================
// Name        : Assignment3.cpp
// Author      : Jordan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedStack.h"
using namespace std;

int main()
{
	LinkedStack<int> numbers;
	cout << numbers.getSize() << endl;
	numbers.push(3);
	cout << numbers.getSize() << endl;
	cout << numbers.getTop() << endl;
	cout << numbers.pop() << endl;
	return 0;
}
