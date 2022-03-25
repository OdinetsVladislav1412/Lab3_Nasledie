#pragma once

#include "MusicalInstrument.h"

class TStrings : public TMusicalInstrument   //��������
{
protected:

	int NumStr;   //number of strings

public:

	TStrings();
	TStrings(int valNumStr);

	int GetNumStr();
	void SetNumStr(int valNumStr);

	virtual void Print();

	~TStrings();

};