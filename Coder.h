#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Шифрование строки алгоритмом Цезаря(muttable)
char* caesarImmut(const char* str, int key);

//Шифрование строки алгоритмом цезаря(immutable)
void caesarMut(char* str, int key);

//Шифрование строки алгоритмом xor(immutable)
char* xorImmut(const char* str, char* key);

//Шифрование строки алгоритмом xor(muttable)
void xorMut(char* str, char* key);