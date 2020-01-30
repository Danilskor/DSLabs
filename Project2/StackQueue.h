#pragma once
#include <iostream>
#include "Stack.h"
#include "Input.h"
using namespace std;

struct StackQueue
{
	Stack *InputStack;
	Stack *OutputStack;
	//TODO: RSDN
	bool IsDeleted = false;
};

const int START_CAPACITY = 8;

StackQueue * CreateStackQueue();
void InitializtionStackQueue(StackQueue*, int);
void StackEnqueue(StackQueue*);
int StackDequeue(StackQueue*);
void ShiftStack(Stack*, Stack*);
void DeleteStackQueue(StackQueue*);
void RecreatingStackQueue(StackQueue*);