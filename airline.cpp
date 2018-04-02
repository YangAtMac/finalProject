// airline.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sqlite3.h>
#include <time.h>
#include <regex>
#include <string>

#include "Person.h"
#include "airline.h"
#include "database.h"

using namespace std;

void printMenu();
dateTime selectDate();
Ticket bookTicket();
void reserveSeat(person user);

int _tmain(int argc, _TCHAR* argv[])
{
	int choic;
	person user;
	printMenu();
	cin >> choic;
	switch(choic){
	case 1:
		bookTicket();
	case 2:
		strcpy_s(user.firstName, "Yang");
		reserveSeat(user);
	}

	cout << endl;
	system("PAUSE");
	return 0;
}

void printMenu()
{
	cout << "\tAIRLINE RESERVATION SYSTEM\n" << endl;
	cout << endl;
	cout << "1. Book a ticket." << endl;
	cout << "2. Reserve passenger's seat." << endl;
	cout << "3. Cancel a ticket." << endl;
	cout << "4. Dispaly flight seat." << endl;
	cout << "5. Dispaly available flight." << endl;
	cout << endl;
	cout << "Please select one: ";
	int choic;
	
}

dateTime selectDate()
{
	string input;
	dateTime date;
	
	regex pattern("\\d{2}/\\d{2}/\\d{4}");
	smatch result;

	while (true) {
		cout << "Please enter date (mm/dd/yyyy): ";
		cin >> input;
		if ( regex_search(input, result, pattern)) {
		date.month =  (input[0] - '0') * 10 + (input[1] - '0');
		date.day = (input[3] - '0') * 10 + (input[4] - '0');
		date.year = (input[6] - '0') * 1000 + (input[7] - '0') * 100 + 
			(input[8] - '0') * 10 + (input[9] - '0');
		cout << "Date: " << date.year << "-" << date.month << "-" 
			<< date.day << endl;
		break;
		} else {
			cout << "Incorrect format, please enter again." << endl;
		}
	} 
	return date;
}

Ticket bookTicket()
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

	return tickets;
}

void reserveSeat(person user)
{
	cout << "Select seat." << endl;
}