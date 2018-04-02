#pragma once

#include <iostream>
#include <ctime>

const int MAX_LEN = 30;

struct dateTime {
	unsigned int year;
	unsigned int month;
	unsigned int day;
	unsigned int hour;
	unsigned int min;
};

struct Ticket {
	char departureCity[MAX_LEN];
	dateTime datetime;
	double hoursFlight;
	char destinationCity[MAX_LEN];
	char ticketNo[15];
	char flightNo[15];
	char status[5];
	double fare;
	int luggageAllow;
};

struct BoardingPass {
	char flightNo[15];
	dateTime date;
	char fromCity[MAX_LEN];
	char toCity[MAX_LEN];
	int gate;
	char grade[2];
	char seatNumber[4];
};

struct Flight {
	char fromCity[4];
	char toCity[4];
	char flightNumber[5];
	dateTime departTime;
	dateTime landingTime;
	int totalSeatNumber;
	double fare;
	char planeModel[8];
	char planeID[30];
	char compamyOwner[20];
};

