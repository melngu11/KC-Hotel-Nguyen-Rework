#include <iostream>
#include <vector>
#include "Functions.h"
#include "Bookings.h"
#include "Error.h"
#include "Hotel.h"
#include "Room.h"


using namespace std;
int main()
{
	vector<Booking> bookingList;
	vector<Hotel> hotelRooms;
	vector<Room> roomCosts;
	vector<Error> errorList;

	readFile(bookingList, hotelRooms, roomCosts, errorList);

	if (bookingList.empty())
		cout << "Empty" << endl;
	if (hotelRooms.empty())
		cout << "Empty room log" << endl;
	else {
		cout << "ROOMS LOADED"<< endl;
	}
	printReport(bookingList, errorList);
}

