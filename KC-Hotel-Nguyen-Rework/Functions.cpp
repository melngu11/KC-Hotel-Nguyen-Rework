#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

#include "Bookings.h"
#include "Error.h"
#include "Functions.h"
#include "Hotel.h"
#include "Room.h"

using namespace std;

int readFile(vector<Booking>& bookingList, vector<Hotel>& hotelRooms, vector<Room>& roomCosts, vector<Error>& errorList) {
	ifstream inFile;
	//fstream outFile;
	inFile.open("HotelData.csv", ios::in | ios::app);
	//outFile.open("Report.txt");
	if (!inFile.is_open()) {
		cout << "File could not be opened" << endl;
		return 1;
	}
	cout << "Accessing file..." << endl;

	string inRec, tempStr, tempType, tempValue, tempReason,temp;
	float tempCost;
	int tempRes=0, tempNights, tempRNum;
	string templName, tempfName;
	vector<string> row;

	while (getline(inFile, inRec)) {
		stringstream inSS(inRec);
		row.clear();
		while (getline(inSS, tempStr, ',')) {
			row.push_back(tempStr);
		}
		if (row[0] == "R") {
			tempType = row[1];
			tempCost = stof(row[2]);
			Room tempRoom;
			tempRoom.SetRoomAndCost(tempType, tempCost);
			roomCosts.push_back(tempRoom);
		
		}
		if (row[0] == "H") {
			try {
				tempRNum = stoi(row[1]);
			}
			catch (...) {
				Error tempError;
				tempError.SetError("room number", row[1], "is not a valid room number.");
				errorList.push_back(tempError);
				continue;
			}
			Hotel tempRoom;
			tempRoom.SetRoomAndType(tempRNum, row[2]);
			hotelRooms.push_back(tempRoom);
		
		}
		if (row[0] == "B") {
			try {
				tempNights = stoi(row[5]);
				tempRes = stoi(row[1]);
			}
			catch (...) {
				Error tempError;
				string tempName = row[2] + " " + row[3];
				tempError.SetError("customer", tempName, "Invalid dat in input string");
				errorList.push_back(tempError);

				tempNights = 0;

			}
			Booking tempBook(tempRes, row[2], row[3], row[4], tempRNum = 0, tempNights);
			bookingList.push_back(tempBook);
		}


	}
	inFile.close();
}
void printReport(vector<Booking> bookingList, vector<Error> errorList) {
	cout << right <<setw(50) << "KANSAS CITY INTERNATIONAL HOTEL" << endl;
	for (int i = 0; i < bookingList.size(); i++) {
		bookingList.at(i).Print();
	}
	for (int i = 0; i < errorList.size(); i++) {
		errorList.at(i).PrintError();
	}
}