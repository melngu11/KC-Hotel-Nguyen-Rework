#pragma once
#ifndef ERROR_H
#define ERROR_H
#include <string>


using namespace std;

class Error {
public:
	void SetError(string category, string value, string reason);
	void PrintError();

private:
	string category;
	string value;
	string reason;
};
#endif