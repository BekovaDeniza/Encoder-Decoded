#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Перевод строки в верхний регистр(immutable)
char* toUpperImmut(const char* str);

//Перевод в верхний регистр(muttable)
void toUpperMut(char* str);

//Перевод строки в нижний регистр(immutable)
char* toLowerImmut(const char* str);

//Перевод строки в нижний регистр(muttable)
void toLowerMut(char* str);

//Удаление пробелов с конца и начала строки(immuttable)
char* trimImmut(const char* str);

//Удаление пробелов с конца и начала строки(muttable)
char* trimMut(char str[]);

//Удаление пробелов из строки(muttable)
void squeezeMut(char str[]);

//Удаление пробелов из строки(immutable)
char* squeezeImmut(const char* str);

//Фильтрация строки(immutable)
char* filterImmut(const char* str);

//Фильтрация строки(muttable)
void filterMut(char* str);

//Объединение нескольких аргументов командной строки в одну строку
char* concat(int argc, char* argv[]);

//Проверка строки на буквеные значения
int isNumber(char* str);

//Проверка строки на числло
int isLetter(char* str);
