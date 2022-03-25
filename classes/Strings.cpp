#include "Strings.h"

TStrings::TStrings()
{
	NumStr = 0;
}

TStrings::TStrings(int valNumStr)
{
	NumStr = valNumStr;
}

int TStrings::GetNumStr()
{
	return NumStr;
}

void TStrings::SetNumStr(int valNumStr)
{
	NumStr = valNumStr;
}

void TStrings::Print()
{
	cout << "Strings:\n" << "NumOctav = " << NumOctav << "\tNumStr = " << NumStr << endl;
}


TStrings::~TStrings()
{
}