#include "func_headers.h"
#include <cstring>
#include <iostream>
using namespace std;
// Цвета текста для консоли
constexpr auto RESET = "\033[0m"      /* Дефолт */;
constexpr auto RED = "\033[31m"      /* Красный */;
constexpr auto BLUE = "\033[34m"      /* Синий */;

// Метод для вывода сообщения об ошибке
void Error(const char* message) {
    cerr << RED << "[ERROR] " << message << RESET << endl;
}

// Метод для вывода информационного сообщения
void Info(const char* message) {
    cout << BLUE << "[INFO] " << message << RESET << endl;
}



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



