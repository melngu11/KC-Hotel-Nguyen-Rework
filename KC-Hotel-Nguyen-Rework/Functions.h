#pragma once
#include <iostream>
#include <vector>
#include "Functions.h"
#include "Bookings.h"
#include "Error.h"
#include "Hotel.h"
#include "Room.h"

int readFile(vector<Booking>& bookingList, vector<Hotel>& hotelRooms, vector<Room>& roomCosts, vector<Error>& errorList);
//pre  : vector is empty
//post : open file and load valid values into appropriate vector

void printReport(vector<Booking> bookingList, vector<Error> errorList);
//pre  : vector is NOT empty
//post : print vector to screen 

void assignRooms(vector<Booking>& bookingList, vector<Hotel>& hotelRooms, vector<Room>& roomCosts, vector<Error>& errorList);
//pre : loaded vectors
//post : update booking list vector with rooms and cost