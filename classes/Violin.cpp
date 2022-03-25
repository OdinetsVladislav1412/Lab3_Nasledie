#include "Violin.h"

TViolin::TViolin()
{
	size = 0;
}

TViolin::TViolin(int valSize)
{
	size = valSize;
}

int TViolin::GetSize()
{
	return size;
}

void TViolin::SetSize(int valSize)
{
	size = valSize;
}

void TViolin::Print()
{
	cout << "Violin:\n" << "NumOctav = " << NumOctav << "\tNumStr = " << NumStr << "\tSize = " << size << endl;
}

TViolin::~TViolin()
{
}
