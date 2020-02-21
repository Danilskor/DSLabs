#include "pch.h"
#include "ArrayHeader.h"


int main()
{
	ArrayStucture structureArray;
	structureArray.Capacity = 8;
	structureArray.Length = 8;
	structureArray.Array = ArrayCreation(&structureArray);

	FillArray(&structureArray);
	ArrayOutput(&structureArray);

	Menu(&structureArray);
	delete[] structureArray.Array;
	return 0;
}