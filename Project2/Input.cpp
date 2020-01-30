#include "Input.h"

bool CheckingForInteger(string value)
{
	int size = value.length();
	if (isdigit(value[0]) || value[0] == '-')
	{
		for (int i = 1; i < size; i++)
		{
			if (!isdigit(value[i]))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
}

int GetValue(int min, int max)
{
	int value;
	//TODO: оформление кода
	const int LENGTH_VALUE = 11;
	while (true)
	{
		string inputValue;
		getline(cin, inputValue);
		if (inputValue.length() <= LENGTH_VALUE)
		{
			if (CheckingForInteger(inputValue) == false
				|| stoll(inputValue) < min || stoll(inputValue) > max)
			{
				cout << endl << "Ошибка!: попробуйте еще раз: ";
				inputValue.clear();
			}
			else
			{
				return stoll(inputValue);
			}
		}
		else
		{
			cout << endl << "Ошибка!: попробуйте еще раз: ";
			inputValue.clear();
		}
	}
}