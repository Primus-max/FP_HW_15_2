#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

void insertCharToPos(char* str, char sym, int pos) {
    size_t len = strlen(str);
    if (pos < 0 || pos > len) {
        Error("������������ �������� �������");
        return;
    }

    // ����� � ������������ �� ������� � �� ������� strncpy_s ����� ������� � �������� strcpy_s
    // �� ��� ��� ������� ��������, ���� �������� ������������������

    // ����������� �������� � ������� pos �� ����� ������ �� ���� ������� ������
    memmove(str + pos + 1, str + pos, len - pos + 1);    
    str[pos] = sym; // ������� ��������� ������� � ������� pos
}




