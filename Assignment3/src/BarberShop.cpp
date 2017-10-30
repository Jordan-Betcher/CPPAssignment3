/*
 * BarberShop.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#include "BarberShop.h"

BarberShop::BarberShop()
{
	
}

void BarberShop::addCustomer(Customer customer)
{
	this->stack.push(customer);
}

Customer BarberShop::nextCustomer()
{
	return this->stack.pop();
}

BarberShop::~BarberShop()
{
	// TODO Auto-generated destructor stub
}

