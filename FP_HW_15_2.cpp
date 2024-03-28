#include <iostream>
#include <windows.h>
#include "func_headers.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	 char str[] = {"Hello World!"};
	 deleteCharacterAtIndex(str, -1);

	 cout << str << endl;
    
}

