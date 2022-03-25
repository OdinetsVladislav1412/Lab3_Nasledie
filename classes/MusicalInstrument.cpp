#include "MusicalInstrument.h"



TMusicalInstrument::TMusicalInstrument()
{
	NumOctav = 0;
}



TMusicalInstrument::TMusicalInstrument(int valNumOctav)
{
	NumOctav = valNumOctav;
}



int TMusicalInstrument::GetNumOctav()
{
	return NumOctav;
}



void TMusicalInstrument::SetNumOctav(int valNumOctav)
{
	NumOctav = valNumOctav;
}



void TMusicalInstrument::Print()
{
	cout << "MusicalInstrument:\n" << "NumOctav = " << NumOctav << endl;
}



TMusicalInstrument::~TMusicalInstrument()
{
}