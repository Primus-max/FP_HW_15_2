#include "func_headers.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// Задание 1
	int indexToRemove = 0;
	cout << "По какому индексу удалить элемент в строке \"Hello World!\"? ";
	cin >> indexToRemove;
	char str[] = { "Hello World!" };
	deleteCharacterAtIndex(str, indexToRemove);
	cout << str << endl;

	// Задание 2
	deleteSymbol(str, 'r');
	cout << str << endl;
}

