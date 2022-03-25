#pragma once

#include "MusicalInstrument.h"

class TKeyboards : public TMusicalInstrument   //Клавишные
{
protected:

	int NumKey;   //number of keys

	bool SoundSourceBool;
	string SoundSourceStr;

public:

	TKeyboards();
	TKeyboards(int valNumKey);

	int GetNumKey();
	void SetNumKey(int valNumKey);

	bool GetSoundSourceBool();
	void SetSoundSourceBool(bool valSoundSourceBool);

	string GetSoundSourceStr();

	virtual void Print();

	~TKeyboards();

};