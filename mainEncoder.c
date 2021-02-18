#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Coder.h"
#include "SetString.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Некорректное количество аргументов. Введите способ шифрования, строку и ключ.\n");
    }

    else {
        char* cipher = argv[1];
        char* str = argv[2];
        char* key = argv[argc - 1];

        if ((cipher, "--caesar") == 0 && !isNumber(key)) {
            printf("Ключ должен быть числом.\n");
        }

        else if (strcmp(cipher, "--xor") == 0 && !isLetter(key)) {
            printf("Ключ должен состоять из латинского алфавита.\n");
        }

        else if (strcmp(cipher, "--caesar") == 0) {
            trimMut(str);
            toLowerMut(str);
            caesarMut(str, atoi(key));
            printf("%s\n", str);
        }

        else if (strcmp(cipher, "--xor") == 0) {
            trimMut(str);
            toLowerMut(str);
            xorMut(str, key);
            printf("%s\n", str);
        }

        else {
            printf("Введите корректный способ кодирования:\n--caesar\n--xor\n");
        }
    }
    return 0;
}
