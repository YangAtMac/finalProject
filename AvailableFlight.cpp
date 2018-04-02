#include "stdafx.h"
#include <vector>

#include "AvailableFlight.h"
#include "airline.h"

AvailableFlight::AvailableFlight(void)
{
}

void AvailableFlight::addNewFlight(void)
{
//	struct Flight {
//	char fromCity[4];
//	char toCity[4];
//	char flightNumber[5];
//	dateTime departTime;
//	dateTime landingTime;
//	int totalSeatNumber;
//	double fare;
//	char planeModel[8];
//	char planeID[30];
//	char compamyOwner[20];
//}

	std::vector<char> schedule;
	std::vector<char>::iterator it;
	it  = schedule.begin();
	it  = schedule.insert(new Flight("YYZ", "YYC", "AC034", "11:00", "13:05", 170, 450.00, "A300"));
}

AvailableFlight::~AvailableFlight(void)
{
}
