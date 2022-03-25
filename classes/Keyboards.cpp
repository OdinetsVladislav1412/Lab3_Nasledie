#include "Keyboards.h"

TKeyboards::TKeyboards()
{
	NumKey = 0;
	SoundSourceBool = 0;
	SoundSourceStr = "Hummer";
}

TKeyboards::TKeyboards(int valNumKey)
{
	NumKey = valNumKey;
}

int TKeyboards::GetNumKey()
{
	return NumKey;
}

void TKeyboards::SetNumKey(int valNumKey)
{
	NumKey = valNumKey;
}

bool TKeyboards::GetSoundSourceBool()
{
	return SoundSourceBool;
}

void TKeyboards::SetSoundSourceBool(bool valSoundSourceBool)
{
	SoundSourceBool = valSoundSourceBool;

	if (SoundSourceBool == 0) 
	{
		SoundSourceStr = "Hammer";
	}
	else 
	{
		SoundSourceStr = "Trumpet";
	}
}

string TKeyboards::GetSoundSourceStr()
{
	return SoundSourceStr;
}

void TKeyboards::Print()
{
	cout << "Keyboards:\n" << "NumOctav = " << NumOctav << "\tNumKey = " << NumKey << "\tSoundSource: " << SoundSourceStr << endl;
}

TKeyboards::~TKeyboards()
{
}