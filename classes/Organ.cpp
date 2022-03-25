#include "Organ.h"

TOrgan::TOrgan()
{
	NumOfRows = 1;
	SoundSourceBool = 1;
	SoundSourceStr = "Trumpet";
}

int TOrgan::GetNumOfRows()
{
	return NumOfRows;
}

void TOrgan::SetNumOfRows(int valNumOfRows)
{
	NumOfRows = valNumOfRows;
}

void TOrgan::Print()
{
	cout << "Organ:\n" << "NumOctav = " << NumOctav << "\tNumKey = " << NumKey;
	cout << "\tSoundSource: " << SoundSourceStr << "\tNumber of rows = " << NumOfRows << endl;
}

TOrgan::~TOrgan()
{
}
