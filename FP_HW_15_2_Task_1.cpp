#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>


void deleteCharacterAtIndex(char str[], int index) {
    if ( index < 0) {      
        Error("Ошибка: Индекс не может быть меньше 0");
        return;
    }
    
    int length = strlen(str);
    if (index >= length) {
        Error("Ошибка: Индекс не может быть больше чем длина строки");
        return; 
    }

    memmove(&str[index], &str[index + 1], static_cast<size_t>(length) - index); // Сдвигаем символы влево
}



