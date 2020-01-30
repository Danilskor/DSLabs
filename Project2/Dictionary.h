#pragma once
#include "HashTable.h"

struct Dictionary
{
	HashTable* Table;
};

const int START_DICTIONARY_SIZE = 5;

Dictionary* CreateDictionary();
string FindEntry(Dictionary*, string);
bool InsertEntry(Dictionary*, Node*, string);
void DeleteEntry(Dictionary*, string);
void DeleteDictionary(Dictionary*);