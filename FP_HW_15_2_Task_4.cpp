#include "func_headers.h"
#include "message_utils.h"
#include <cstring>
#include <iostream>

//char* strset(char* s, int c); � �������� ��� �������
//������ s �������� �������� c.

void replaceAllSymbols(char* str, char src, char ptr) {
	if (!str) {
		Error("��������� ������ ���� �� ���������");
		return;
	}

	// �������� ����������, ��� ��� ������� �����, 
	// ��� ������ �� ����������, ��� ���� ����� ����� �������
	size_t length = strlen(str);
	for (size_t i = 0; i < length; ++i)
		if (str[i] == src) str[i] = ptr;
}