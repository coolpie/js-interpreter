#pragma once
#ifndef _VALUE_H_
#define _VALUE_H_

#include <string>

class Value
{
public:
	Value();
	~Value();
	/* Get value of this. */
	void getValue();

private:
	std::string nativeStr;
	int type;
	std::string getStringValue();
	int getIntValue();
	int getBooleanValue();
	std::string getNullValue();
	std::string getUndefineValue();
};

#endif