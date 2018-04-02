#pragma once

#include "airline.h"

const int MAX_NAME_LEN = 30;

struct person {
	char idType[10];
	char iD[50];
	char lastName[MAX_NAME_LEN];
	char firstName[MAX_NAME_LEN];
	Ticket tickets[10];
	dateTime dateOfBirth;
};

class Person
{
	
public:
	Person(void);
	char idType[10];
	char iD[50];
	char lastName[MAX_NAME_LEN];
	char firstName[MAX_NAME_LEN];
	dateTime dateOfBirth;
	char phoneNumber[20];
	char email[30];
	Ticket tickets[10];
	BoardingPass boardPass[10];
		
	virtual void bookTicket() = 0;
	virtual dateTime selectDate() = 0;

	virtual ~Person(void);
};

