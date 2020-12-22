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

char*   caesarImmut(const char* str, int n) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));

    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (*str + n < 'z') {
                res[i] = str[i] + n;
            }
            else if (*str + n > 'z') {
                res[i] = 'a' + (*str + n) % ('z' - 'a' + 1);;
            }
            else if (*str + n < 'a') {
                res[i] = 'z' - ('a' % (*str + n)) + 1;
            }
        }
        else {
		    res[i] = str[i];
	        }
	}
	return res;
}

char*   xorImmut(const char* str, char* key) {
	char* res = malloc((strlen(str) + 1) * sizeof(char)) ;
	
	for (int i = 0; i <= strlen(str); ++i) {
		res[i] = str[i] ^ key[i % strlen(key)];
	}
	return res;
}

void	xorMut(char* str, char* key) {
	for (int i = 0; i < strlen(str); ++i) {
		str[i] = str[i] ^ key[i % strlen(key)];
    }
}