#include <iostream>
#include <string>
using namespace std;

#include "Hotel.h"

void Hotel::SetRoomAndType(int roomNumber, string roomType) {
	number = roomNumber;
	type = roomType;
}
int Hotel::GetRoom() const {
	return number;
}
string Hotel::GetType() const {
	return type;
}
