#include "func_headers.h"
#include <cstring>
#include <iostream>
using namespace std;
// ����� ������ ��� �������
constexpr auto RESET = "\033[0m"      /* ������ */;
constexpr auto RED = "\033[31m"      /* ������� */;
constexpr auto BLUE = "\033[34m"      /* ����� */;

// ����� ��� ������ ��������� �� ������
void Error(const char* message) {
    cerr << RED << "[ERROR] " << message << RESET << endl;
}

// ����� ��� ������ ��������������� ���������
void Info(const char* message) {
    cout << BLUE << "[INFO] " << message << RESET << endl;
}



void deleteCharacterAtIndex(char str[], int index) {
    if ( index < 0) {      
        Error("������: ������ �� ����� ���� ������ 0");
        return;
    }
    
    int length = strlen(str);
    if (index >= length) {
        Error("������: ������ �� ����� ���� ������ ��� ����� ������");
        return; 
    }

    memmove(&str[index], &str[index + 1], static_cast<size_t>(length) - index); // �������� ������� �����
}



