#include "Coder.h"

void    caesarMut(char* str, int n) {
    while (*str) {

        if (*str >= 'a' && *str <= 'z') {
            
            if (*str + n < 'z') {
                *str += n;
            }

            else if (*str + n > 'z') {
                *str = 'a' + (*str + n) % ('z' - 'a' + 1);
            }

            else if (*str + n < 'a') {
                *str = 'z' - ('a' % *str) + 1;
            }
        }
        ++str;
    }
}

char*   caesarImmut(const char* str, const int n) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
	strcpy(res, str);
    caesarMut(res, n);

    return res;
}

void	xorMut(char* str, char* key) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = str[i] ^ key[i % strlen(key)];
    }
}

char*   xorImmut(const char* str, const char* key) {
    char* res = malloc((strlen(str) + 1) * sizeof(char)) ;
    strcpy(res, str);
    xorMut(res, key);

    return res;
}
