#include <iostream>
#include <string>
#include "Room.h"


void Room::SetRoomAndCost(string roomType, float cost) {
	this->cost = cost;
	type = roomType;
}
float Room::GetCost() const {
	return cost;
}
string Room::GetType() const {return type;}

