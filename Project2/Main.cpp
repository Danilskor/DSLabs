#include "List.h"
#include <ctime>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(unsigned(time(nullptr)));
	List *list = CreateList();

	while (true)
	{
		int value = 0;
		int index = 0;
		const int EXIT_VALUE = 0;
		system("cls");
		PrintList(list);
		PrintMenu();
		cout << "\nВведите пункт меню: ";
		switch (GetValue(0, 8))
		{
		case 1:
		{
			AddNode(list);
			break;
		}
		case 2:
		{
			if (list->Size > 0)
			{
				cout << "Введите индекс: ";
				DeleteNode(list, GetValue(0, list->Size - 1));
			}
			else
			{
				cout << "Список пуст!\n";
				system("pause");
			}
			break;
		}
		case 3:
		{
			cout << "Введите значение: ";
			value = GetValue(INT_MIN, INT_MAX);

			clock_t begin = clock();
			InsertNode(list, 0, value);
			clock_t end = clock();

			cout << endl << "Time: " <<
				double(end - begin) / CLOCKS_PER_SEC << endl;
			system("pause");
			break;
		}
		case 4:
		{
			cout << "Введите значение: ";
			value = GetValue(INT_MIN, INT_MAX);
			InsertNode(list, list->Size, value);
			break;
		}
		case 5:
		{
			if (list->Size == 0)
			{
				cout << "В списке нет элементов!\n";
				system("pause");
				break;
			}
			else
			{
				cout << "Введите индекс элемента: ";
				index = GetValue(0, list->Size - 1) + 1;
				cout << "Введите значение: ";
				value = GetValue(INT_MIN, INT_MAX);

				clock_t begin = clock();
				InsertNode(list, index, value);
				clock_t end = clock();

				cout << endl << "Time: " <<
					double(end - begin) / CLOCKS_PER_SEC << endl;
				system("pause");
				break;
			}
		}
		case 6:
		{
			if (list->Size == 0)
			{
				cout << "В списке нет элементов!\n";
				system("pause");
				break;
			}
			else
			{
				cout << "Введите индекс элемента: ";
				index = GetValue(0, list->Size - 1);
				cout << "Введите значение: ";
				value = GetValue(INT_MIN, INT_MAX);
				InsertNode(list, index, value);
				break;
			}
		}
		case 7:
		{
			BubbleSort(list);
			break;
		}
		case 8:
		{
			cout << "Введите значение элемента: ";
			LinearSearch(list, GetValue(INT_MIN, INT_MAX));
			cout << endl;
			system("pause");
			break;
		}
		case EXIT_VALUE:
		{
			DeleteList(list);
			return 0;
			break;
		}
		}
	}
}