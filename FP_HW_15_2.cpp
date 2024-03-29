﻿#include "func_headers.h"
#include "message_utils.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	size_t len = 1024;
	char* inputStr = new char[len] {};
	Info("Введите строку (не более 1024 символов): ");	
	gets_s(inputStr, len);	

	// Задание 1
	int indexToRemove = 0;
	Info("По какому индексу удалить элемент в строке ? ");
	cin >> indexToRemove;	
	deleteCharacterAtIndex(inputStr, indexToRemove);
	cout << inputStr << endl;

	// Задание 2
	char symbol ;
	Info("Какой символ удалить из строки? (все повторяющиеся символы) ");	
	cin >> symbol;
	deleteSymbol(inputStr, symbol);
	cout << inputStr << endl;

	// Задание 3
	char chToInsert ;
	int posToInsert =  0;
	Info("Укажите, какой символ и на какую позицию в строке вставить: ");
	cin >> chToInsert >> posToInsert;
	insertCharToPos(inputStr, chToInsert, posToInsert);
	cout << inputStr << endl;
}

