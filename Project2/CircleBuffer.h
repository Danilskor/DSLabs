#pragma once
#include <iostream>
#include "Input.h"

//TODO: Проинициализировать сразу
struct CircleBuffer
{
	int *Array;
	int Length = 0;
	int Capacity;
	int InIndex = 0;
	int OutIndex = 0;
	bool *isFull;
	bool isDeleted = true;
};

CircleBuffer * CreateCircleBuffer();
int FreeSpace(CircleBuffer*);
//TODO:
int FilledSpce(CircleBuffer*);
void AddingElmentCircleBuffer(CircleBuffer*);
int GetCircleBuffer(CircleBuffer*);
void DeletingCircleBuffer(CircleBuffer*);
void InitializationBuffer(CircleBuffer*);