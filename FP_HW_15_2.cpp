#include "func_headers.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char str[] = { "Hello World!" };
	deleteCharacterAtIndex(str, 3);

	cout << str << endl;

}

