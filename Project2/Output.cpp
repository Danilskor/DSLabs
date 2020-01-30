#include "Output.h"

void PrintMainMenu(int exitMenuValue)
{
	cout << "________________Menu_________________\n";
	cout << "1. ���� �����\n";
	cout << "2. ���� ������������ ������\n";
	cout << "3. ���� ������� �� ������\n";
	cout << "4. ���� ������� �� ������������ ������\n";
	cout << exitMenuValue <<". ����� �� ���������\n";
	cout << "_____________________________________\n";
};

void PrintStackMenu(int exitMenuValue, int deleteMenuValue)
{
	cout << "__________________Menu___________________\n";
	cout << deleteMenuValue <<". ����� � ������� ���� � �������� �����\n";
	cout << "1. Push\n";
	cout << "2. Pop\n";
	cout << exitMenuValue <<". ����� � ������� ���� ��� �������� �����\n";
	cout << "_________________________________________\n";
};

void PrintStack(Stack *stack, string outputText)
{
	if (!stack->IsDeleted && stack->Length !=0)
	{	
		cout << outputText;
		for (int i = 0; i < stack->Length; i++)
		{

			cout << stack->Array[i] << ' ';
		}
		cout << endl;
	}
};

void PrintElement(int withdrawalElementValue)
{
	cout << ">>" << withdrawalElementValue << endl;
};

void PrintInput()
{
	cout << "������� ��������\n>";
};

void PrintFreeSpase()
{
	cout << "���������� �����:\n";
};

void PrintOccupedSpase()
{
	cout << "�������� �����:\n";
};

void PrintCircleBufferMenu( int deleteMenuValue, int exitMenuValue)
{
	cout << "_________________________Menu__________________________\n";
	cout << deleteMenuValue << 
		". ����� � ������� ���� � �������� ������������ ������\n";
	cout << "1. ����� ���������� � ����������� �����\n";
	cout << "2. ���������� �������� � �����\n";
	cout << "3. ���������� �������� �� ������\n";
	cout << exitMenuValue <<
		". ����� � ������� ���� ��� �������� ������������ ������\n";
	cout << "_______________________________________________________\n";
};

void PrintQueueMenu(int deleteMenuValue, int exitMenuValue)
{
	cout << "_________________________Menu__________________________\n";
	cout << deleteMenuValue <<
		". ����� � ������� ���� � �������� ������� \n";
	cout << "1. ���������� �������� �� �������\n";
	cout << "2. ���������� �������� � �������\n";
	cout << exitMenuValue <<
		". ����� � ������� ���� ��� �������� �������\n";
	cout << "_______________________________________________________\n";
};

void PrintStackQueue(StackQueue *stackQueue)
{
	if (!stackQueue->IsDeleted)
	{
		ShiftStack(stackQueue->OutputStack, stackQueue->InputStack);
		PrintStack(stackQueue->OutputStack, "������� �� ������: ");
	}
};

void PrintCreateCircleBuffer()
{
	cout << "������� ������ ������: ";
};

void PrintCreateStack()
{
	cout << "������� ������ �����: ";
};

void PrintBuffer(RingBuffer ringBuffer)
{
	if (!ringBuffer.IsDeleted && ringBuffer.OccupiedSpace != 0)
	{
		cout << "Circle buffer: ";
		BufferNode *nodeToPrint = ringBuffer.Head;
		for (int i = 0; i < ringBuffer.BufferSize; i++)
		{
			if (nodeToPrint->Full)
			{
				cout << ' ' << nodeToPrint->Data << ' ';
			}
			nodeToPrint = nodeToPrint->NextBufferNode;
		}
		cout << endl;
	}
};