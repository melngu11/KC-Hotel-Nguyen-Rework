#pragma once
#ifndef ROOM_H
#define ROOM_H
#include <string>


using namespace std;

class Room {
public:
	void SetRoomAndCost(string roomType, float cost);
	string GetType() const;
	float GetCost() const;
private:
	string type;
	float cost=-1;

};
#endif