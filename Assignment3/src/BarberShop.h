/*
 *  Name: BarberShop.h
 *  Author: Jordan Betcher
 *  Created on: Oct 30, 2017
 *  Description: Keeps track of the next customer with first in first out.
 *  Comment: Copied class over and added methods.
 *  		 Can't change variable names as much as I would like to.
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include "customer.h"
#include "LinkedStack.h"
using namespace std;

class BarberShop
{
	private:
		LinkedStack<Customer> s1;
		LinkedStack<Customer> s2;
	public:
		BarberShop();
		void addCustomer(Customer& customer);
		Customer nextCustomer();
		virtual ~BarberShop();
};

//Creates the BarberShop Object
BarberShop::BarberShop()
{
	this->s1 = LinkedStack<Customer>();
	this->s2 = LinkedStack<Customer>();
}

//Adds a customer to stack
inline void BarberShop::addCustomer(Customer& customer)
{
	while ( ! s1.isEmpty())
	{
		s2.push(s1.pop());
	}
	s2.push(customer);

	while ( ! s2.isEmpty())
	{
		s1.push(s2.pop());
	}
}

//Pops next customer from stack
inline Customer BarberShop::nextCustomer()
{
	return this->s1.pop();
}

//Destroys the BarberShop Object
inline BarberShop::~BarberShop()
{
	// TODO Auto-generated destructor stub
}

#endif /* BARBERSHOP_H_ */
