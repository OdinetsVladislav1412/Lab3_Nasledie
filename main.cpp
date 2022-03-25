#include <iostream>
#include <string>

#include "MusicalInstrument.h"
#include "Strings.h"
#include "Keyboards.h"
#include "Guitar.h"
#include "Violin.h"
#include "Piano.h"
#include "Organ.h"

using namespace std;



int main()
{

	cout << "1st level:\n" << endl;


	TMusicalInstrument in1(1);
	in1.Print();
	cout << "\n\n" << endl;


	cout << "2nd level:\n" << endl;


	TStrings in2(12);
	in2.SetNumOctav(11);
	in2.Print();
	cout << "" << endl;


	TKeyboards in3(21);
	in3.SetNumOctav(22);
	in3.SetSoundSourceBool(0);
	in3.Print();
	cout << "\n\n" << endl;


	cout << "3rd level:\n" << endl;


	TGuitar in4;
	in4.SetNumOctav(111);
	in4.SetNumStr(112);
	in4.SetTypeBool(1);
	in4.Print();
	cout << "" << endl;


	TViolin in5(123);
	in5.SetNumOctav(121);
	in5.SetNumStr(122);
	in5.Print();
	cout << "" << endl;


	TPiano in6;
	in6.SetNumOctav(211);
	in6.SetNumKey(212);
	in6.SetTypeBool(1);
	in6.Print();
	cout << "" << endl;
	
	TOrgan in7;
	in7.SetNumOctav(221);
	in7.SetNumKey(222);
	in7.Print();
	cout << "" << endl;


	return 0;

}