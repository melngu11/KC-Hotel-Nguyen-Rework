#pragma once
#ifndef HOTEL_H
#define HOTEL_H
#include <string>


using namespace std;

class Hotel {
public:
	void SetRoomAndType(int roomNumber, string roomType);
	int GetRoom() const;
	string GetType() const;

private:
	int number=-1;
	string type;

};

#endif