#pragma once
#include <iostream>
#include "Input.h"

//TODO: Проинициализировать
struct Stack
{
	int *Array;
	int Length = 0;
	int Capacity;
	//TODO: RSDN
	bool IsDeleted = false;
};

Stack* CreateStack();
void DeletingStack(Stack*);
int Pop(Stack*);
void Push(Stack*, int);
void InitializationStack(Stack*, int);