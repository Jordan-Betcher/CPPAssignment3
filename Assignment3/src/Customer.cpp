/*
 * Customer.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#include "Customer.h"

Customer::Customer(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

std::string Customer::getName()
{
	return (firstName + " " + lastName);
}

Customer::Customer()
{
}

Customer::~Customer()
{
	// TODO Auto-generated destructor stub
}

