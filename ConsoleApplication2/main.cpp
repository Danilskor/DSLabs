#include "pch.h"
#include "ArrayHeader.h"


int main()
{
	//Создание массива
	ArrayStucture structureArray;
	//Инициализация массива
	structureArray.Capacity = 8;
	structureArray.Length = 8;
	structureArray.Array = ArrayCreation(&structureArray);

	FillArray(&structureArray);
	ArrayOutput(&structureArray);

	Menu(&structureArray);
	delete[] structureArray.Array;
	return 0;
}