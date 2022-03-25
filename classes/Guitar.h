#pragma once

#include "Strings.h"

class TGuitar : public TStrings   
{
protected:
	bool TypeBool;
	string TypeStr;
public:

	TGuitar();

	bool GetTypeBool();
	void SetTypeBool(bool valTypeBool);

	string GetTypeStr();

	virtual void Print();

	~TGuitar();

};