#include "Guitar.h"

TGuitar::TGuitar()
{
	TypeBool = 0;
	TypeStr = "Classical";
}


bool TGuitar::GetTypeBool()
{
	return TypeBool;
}

void TGuitar::SetTypeBool(bool valTypeBool)
{
	TypeBool = valTypeBool;
	if (TypeBool == 0)
	{
		TypeStr = "Classical";
	}
	else
	{
		TypeStr = "Electronic";
	}
}

string TGuitar::GetTypeStr()
{
	return TypeStr;
}

void TGuitar::Print()
{
	cout << "Guitar:\n" << "NumOctav = " << NumOctav << "\tNumStr = " << NumStr << "\tType: " << TypeStr << endl;
}

TGuitar::~TGuitar()
{
}
