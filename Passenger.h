#pragma once
#include "person.h"
class Passenger :
	public Person
{
public:
	Passenger(void);
	void bookTicket();
	dateTime selectDate();
	~Passenger(void);
};

