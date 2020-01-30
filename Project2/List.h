#pragma once
#include <string>
#include <iostream>

using namespace std;

struct Node
{
	int Data;
	Node *Next;
	Node *Prev;
};

struct List
{
	Node *Head;
	Node *Tail;
	int Size;
};

const int MAX_VALUE = 100;

List* CreateList();
void PrintList(List*);
void AddNode(List*);
Node* ListIterator(List*, size_t);
void DeleteNode(List*, size_t);
void InsertNode(List*, size_t, int);
void BubbleSort(List*);
int LinearSearch(List*, int);
void DeleteList(List*);
int GetValue(int, int);
void PrintMenu();
void BubbleSort(List*);
int RandomData(int, int);
bool CheckingForInteger(string);



