#pragma once
#ifndef BOOKINGS_H
#define BOOKINGS_H
#include <string>


using namespace std;

class Booking {
public:
	Booking();
	Booking(int, string, string , string , int , int );
	int GetReservation();
	int GetNights();
	string GetType();
	string GetlName();
	string GetfName();
	int GetRoom();
	void SetCost(float roomCost);

	void Print();



private:
	int reservation=-1;
	int number=-1;
	string type;
	string lastName;
	string firstName;
	int nights=-1;
	float cost=-1;
};

#endif