#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

void deleteSymbol(char str[], char sym) {
	int len = strlen(str);
	char* ptr;

	// Ради двух строк пришлось попотеть 
	while ((ptr = strpbrk(str, &sym)) != nullptr)
		strcpy_s(ptr, strlen(ptr) + 1, ptr + 1);
	
}
