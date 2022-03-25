#pragma once

#include "Keyboards.h"

class TOrgan : public TKeyboards
{
protected:
	int NumOfRows;//Number of rows
public:

	TOrgan();

	int GetNumOfRows();
	void SetNumOfRows(int valNumOfRows);

	virtual void Print();

	~TOrgan();

};
