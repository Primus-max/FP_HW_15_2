#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

// Делал разные способы, и switch case, но до сих по получаю 
// отрицательные значени для русских символов, поэтом код не работает
CharCounts countCharacters(const char* str) {
    CharCounts counts = { 0, 0, 0 };
    if (!str) {
        Error("Не найдена указанная строка!");
        return counts;
    }

    while (*str) {
        if (iswalpha(*str))
            counts.letters++;
        else if (iswdigit(*str))
            counts.digits++;
        else
            counts.others++;

        str++;
    }

    return counts;
}