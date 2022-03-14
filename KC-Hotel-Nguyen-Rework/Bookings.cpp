#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "Bookings.h"

Booking::Booking(int reservationNumber, string firstName, string lastName, string roomType, int roomNumber, int numberNights) {
	reservation = reservationNumber;
	this->firstName = firstName;
	this->lastName = lastName;
	type = roomType;
	number = roomNumber;
	nights = numberNights;
}
int Booking::GetReservation() { return reservation; }
string Booking::GetfName() { return firstName; }
string Booking::GetlName() { return lastName; }
string Booking::GetType() { return type;}
int Booking::GetRoom() { return number; }
int Booking::GetNights() { return nights; }
void Booking::SetCost(float roomCost) {
	cost = roomCost;
}

void Booking::Print() {
	cout << reservation << " " << firstName << "\t\t" << lastName << "\t" << type << "\t" << right << number << "\t" << fixed << setprecision(2) << right << cost << endl;
}