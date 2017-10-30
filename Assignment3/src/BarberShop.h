/*
 * BarberShop.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include "customer.h"
#include "LinkedStack.h"

class BarberShop
{
	private:
		LinkedStack<Customer> stack;
	public:
		BarberShop();
		void addCustomer(Customer customer);
		Customer nextCustomer();
		virtual ~BarberShop();
};

#endif /* BARBERSHOP_H_ */
