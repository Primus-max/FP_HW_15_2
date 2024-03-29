#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

// ����� ������ �������, � switch case, �� �� ��� �� ������� 
// ������������� ������� ��� ������� ��������, ������ ��� �� ��������
CharCounts countCharacters(const char* str) {
    CharCounts counts = { 0, 0, 0 };
    if (!str) {
        Error("�� ������� ��������� ������!");
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