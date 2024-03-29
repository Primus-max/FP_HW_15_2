#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

//char* strset(char* s, int c); — Заменяет все символы
//строки s заданным символом c.

void replaceAllSymbols(char* str, char src, char ptr) {
	if (!str) {
		Error("Указанная строка была не корректна");
		return;
	}

	// Возможно показалось, что это решение проще, 
	// или просто не разобрался, что сюда может точно подойти
	size_t length = strlen(str);
	for (size_t i = 0; i < length; ++i)
		if (str[i] == src) str[i] = ptr;
}