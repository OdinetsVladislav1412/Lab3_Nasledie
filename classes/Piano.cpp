#include "Piano.h"

TPiano::TPiano()
{
	typeBool = 0;
	typeStr = "Acoustic";

	SoundSourceBool = 0;
	SoundSourceStr = "Hummer";
}

bool TPiano::GetTypeBool()
{
	return typeBool;
}

void TPiano::SetTypeBool(bool valTypeBool)
{
	typeBool = valTypeBool;
	if (typeBool == 0)
	{
		typeStr = "Acoustic";
	}
	else
	{
		typeStr = "Digital";
	}
}

string TPiano::GetTypeStr()
{
	return typeStr;
}

void TPiano::Print()
{
	cout << "Piano:\n" << "NumOctav = " << NumOctav << "\tNumKey = " << NumKey;
	cout << "\tSoundSource: " << SoundSourceStr << "\tType: " << typeStr << endl;
}

TPiano::~TPiano()
{
}
