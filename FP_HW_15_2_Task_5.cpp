#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

int countingRepeatedChar(char* str, char sym) {
	if (!str) {
		Error("Не найдена указанная строка!");
		return -1;
	}

	char* ptr;
	int counter = 0;
	
	while ((ptr = strpbrk(str, &sym)) != nullptr) {
		str = ptr + 1;
		++counter;
	}

	return counter;
}