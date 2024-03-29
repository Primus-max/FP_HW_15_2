#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H


// Функция удаляет из строки символ с заданным номером.
void deleteCharacterAtIndex(char str[], int index);

// Функция удаляет из строки все вхождения заданного символа.
void deleteSymbol(char str[], char sym);

// Функция вставляет указанный символ в указанную позицию
void insertCharToPos(char* str, char sym, int pos);

// Функция заменяет все '.' на '!'
void replaceAllSymbols(char* str, char src, char ptr);

#endif 
