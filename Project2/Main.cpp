#include "Menu.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool isExitFromWhile = true;

	while (isExitFromWhile)
	{
		MainMenuText();
		int button = GetValue(0, 2);

		switch (button)
		{
			case ExitButton:
			{
				return 0;
			}
			case 1:
			{
				system("cls");
				MenuHashTable(CreateTable(MIN_HASHTABLE_SIZE));
				break;
			}
			case 2:
			{
				system("cls");
				MenuDictionary(CreateDictionary());
				break;
			}
		}
	}
}

