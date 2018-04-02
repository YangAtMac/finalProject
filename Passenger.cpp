#include "stdafx.h"
#include "Passenger.h"
#include <iostream>

using namespace std;

Passenger::Passenger(void)
{
}

void Passenger::bookTicket()
{
	bool roundTrip;
	char ans;
	char departCity[20] = {0};
	char destinationCity[20] = {0};
	Ticket tickets[2];
	
	cout << "Enter departure city: ";
	cin >> departCity;
	cout << "Enter destination city: ";
	cin >> destinationCity;
	cout << "Round trip? (y/n)" << endl;
	cin >> ans;
	roundTrip = (toupper(ans)=='Y') ? true : false;
	dateTime departDate = selectDate();
	
	tickets[0].datetime = departDate;
	strcpy_s(tickets[0].departureCity, departCity);
	strcpy_s(tickets[0].destinationCity, destinationCity);

	if (roundTrip) {
		cout << "Return date, ";
		dateTime returnDate = selectDate();

		tickets[1].datetime = departDate;
		strcpy_s(tickets[1].departureCity, destinationCity);
		strcpy_s(tickets[1].destinationCity, departCity);
	}
}

dateTime  Passenger::selectDate()
{

}

Passenger::~Passenger(void)
{
}
