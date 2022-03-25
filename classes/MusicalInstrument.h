#pragma once

#include <iostream>
#include <locale>
#include <string>
using namespace std;



class TMusicalInstrument
{
protected:

	int NumOctav; //Number Of Octaves

public:

	TMusicalInstrument();
	TMusicalInstrument(int valNumOctav);

	int GetNumOctav();
	void SetNumOctav(int valNumOctav);

	void Print();

	~TMusicalInstrument();

};