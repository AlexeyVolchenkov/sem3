#include <iostream>
#include "strutil.h"
using namespace std;

/*
Написать функцию для определяет наличие строки a в строке str
int strConteins(char *a, char* str)
Возвращает -1, если не содержит
Позицию начала, если содержит
Примечание:
1. Функция ищет только первое вхождение
2. Программа должна включать следующие файлы:
main.cpp – функции для тестирование strConteins
strutil.cpp – реализация функции strConteins
strutil.h - объявление функции strConteins
*/

int main()
{
	char string1[100], string2[100];
	cin >> string1 >> string2;
	cout << strConteins(string1, string2);
}