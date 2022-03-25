#pragma once

#include "Strings.h"

class TViolin : public TStrings
{
protected:
	int size;
public:

	TViolin();
	TViolin(int valSize);

	int GetSize();
	void SetSize(int valSize);

	virtual void Print();

	~TViolin();

};
