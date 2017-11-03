/*
 * Customer.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#include "Customer.h"

//Creates the Customer Object
Customer::Customer(std::string firstName, std::string lastName)
{
	this->mFirstName = firstName;
	this->mLastName = lastName;
}

//Returns firstName and LastName as a single string
std::string Customer::getName()
{
	return (mFirstName + " " + mLastName);
}

//Creates Default Customer so that it works with Stack
Customer::Customer()
{
}

Customer::~Customer()
{
	// TODO Auto-generated destructor stub
}

