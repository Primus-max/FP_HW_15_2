#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

void insertCharToPos(char* str, char sym, int pos) {
    size_t len = strlen(str);
    if (pos < 0 || pos > len) {
        Error("Некорректное значение позиции");
        return;
    }

    // Делал с копированием от позиции и до позиции strncpy_s потом обратно в исходную strcpy_s
    // Но это мне кажется красивее, надо замерять производительность

    // Перемещение символов с позиции pos до конца строки на одну позицию вправо
    memmove(str + pos + 1, str + pos, len - pos + 1);    
    str[pos] = sym; // Вставка заданного символа в позицию pos
}




