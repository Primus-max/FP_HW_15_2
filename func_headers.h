#ifndef FUNC_HEADERS_H
#define FUNC_HEADERS_H


// ������� ������� �� ������ ������ � �������� �������.
void deleteCharacterAtIndex(char str[], int index);

// ������� ������� �� ������ ��� ��������� ��������� �������.
void deleteSymbol(char str[], char sym);

// ������� ��������� ��������� ������ � ��������� �������
void insertCharToPos(char* str, char sym, int pos);

// ������� �������� ��� '.' �� '!'
void replaceAllSymbols(char* str, char src, char ptr);

#endif 
