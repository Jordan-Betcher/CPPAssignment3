/*
 * Customer.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Betcher
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>

class Customer
{
	private:
		std::string firstName;
		std::string lastName;
	public:
		Customer();
		Customer(std::string firstName, std::string lastName);
		std::string getName();
		virtual ~Customer();
};

#endif /* CUSTOMER_H_ */
