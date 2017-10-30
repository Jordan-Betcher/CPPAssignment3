/*
 * BarberShop.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#include "BarberShop.h"

BarberShop::BarberShop()
{
	this->queue = LinkedStack<Customer>();
}

void BarberShop::addCustomer(Customer customer)
{
	LinkedStack<Customer> stack = LinkedStack<Customer>();
	while(!queue.isEmpty())
	{
		stack.push(queue.pop());
	}
	stack.push(customer);

	while(!stack.isEmpty())
	{
		queue.push(stack.pop());
	}
}

Customer BarberShop::nextCustomer()
{
	return this->queue.pop();
}

BarberShop::~BarberShop()
{
	// TODO Auto-generated destructor stub
}

