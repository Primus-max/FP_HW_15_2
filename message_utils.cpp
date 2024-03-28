
#include "message_utils.h"
#include <iostream>
using namespace std;

// ����� ������ ��� �������
constexpr auto RESET = "\033[0m"      /* ������ */;
constexpr auto RED = "\033[31m"      /* ������� */;
constexpr auto BLUE = "\033[34m"      /* ����� */;


void Error(const char* message) {
    cerr << RED << "[ERROR] " << message << RESET << endl;
}

void Info(const char* message) {
    cout << BLUE << "[INFO] " << message << RESET << endl;
}