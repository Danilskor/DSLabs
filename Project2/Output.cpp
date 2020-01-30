#include "Output.h"

void MainMenuText()
{
	cout << " _________________MENU_______________\n";
	cout << " 0. ����� �� ���������\n";
	cout << " 1. ���-�������\n";
	cout << " 2. �������\n";
	cout << " ___________________________________\n";
	cout << endl;
}

void MenuHashTableText()
{
	cout << " ______________________MENU____________________\n";
	cout << " 0. ����� �� ����\n";
	cout << " 1. �������� ������ � �������\n";
	cout << " 2. ������� ������ �� �������\n";
	cout << " 3. ����� ������ �� �����\n";
	cout << " _____________________________________________\n";
	cout << endl;
}



void MenuDictionaryText()
{
	cout << " ______________________MENU____________________\n";
	cout << " 0. ����� �� ����\n";
	cout << " 1. �������� ������ � �������\n";
	cout << " 2. ������� ������ �� �������\n";
	cout << " 3. ����� ������ �� �����\n";
	cout << " _____________________________________________\n";
	cout << endl;
}



void PrintTable(HashTable* hashTable)
{
	if (hashTable->Length != 0)
	{
		Node* currentNode;
		cout << "            HASHTABLE\n\n";

		for (int i = 0; i < hashTable->Size; i++)
		{
			currentNode = hashTable->Array[i]->Head;

			if (currentNode != nullptr)
			{
				PrintNode(currentNode);
				currentNode = currentNode->Next;

				while (currentNode != nullptr)
				{
					cout << ">>>>";
					PrintNode(currentNode);
					currentNode = currentNode->Next;
				}
			}
			else
			{
				cout << "Key:     Value:\n";
			}
		}
		cout << endl;
	}
}

void PrintHashTableSearchingElement(string key, string value)
{
	cout << "������ �������\n���� - " << key << " �������� - " <<
		value << endl;
}

void PrintDictonary(Dictionary* dictonary)
{
	if (dictonary->Table->Length != 0)
	{
		cout << "            Dictonary\n\n";
		Node* currentNode;
		for (int i = 0; i < dictonary->Table->Size; i++)
		{
			currentNode = dictonary->Table->Array[i]->Head;
			while (currentNode != nullptr)
			{
				PrintNode(currentNode);
				currentNode = currentNode->Next;
			}
	
		}
	}
}

void PrintDictionarySearchingElement(string key)
{
	cout << "�� ������� ����� ������� ��������: " << 
		key<< endl;
}

void PrintEnterKey()
{
	cout << "������� ����\n>> ";
}

void PrintEnterValue()
{
	cout << "������� ��������\n>> ";
}

//TODO: 
void PrintNode(Node* node)
{
	cout << "Key: " << node->Key << '\t'
		<< "    Value: " << node->Value << endl;
}

void InsertErrorMessage()
{
	cout << "������� � ����� ������ ��� ����������!\n";
}

void DeleteErrorMessage()
{
	cout <<"������ �������� �� ����������!\n";
}

void OverwriteErrorMessage()
{
	cout << "����� ������� ��� ����������!\n";
}

void FindErrorMessage()
{
	cout << "�� �������!!\n";
}