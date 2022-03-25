#pragma once

#include "Keyboards.h"

class TPiano : public TKeyboards
{
protected:
	bool typeBool;
	string typeStr;
public:

	TPiano();

	bool GetTypeBool();
	void SetTypeBool(bool valTypeBool);

	string GetTypeStr();

	virtual void Print();

	~TPiano();

};