#include "SetString.h"

void    toUpperMut(char* str) {
    while (*str) {

        if ('a' <= *str && *str <= 'z') {
            *str += 'A' - 'a';
        }
        ++str;
    }
}

char*   toUpperImmut(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    toUpperMut(res);

    return res;
}

void    toLowerMut(char* str) {
    while (*str) {

        if ('A' <= *str && *str <= 'Z') {
            *str += 'a' - 'A';
        }
        ++str;
    }
}

char*   toLowerImmut(const char* str) {
    char* res = malloc((strlen(str) + 1) * sizeof(char));
    strcpy(res, str);
    toLowerMut(res);

    return res;
}

void    trimMut(char str[]) {
    int begin = 0;
    int end = strlen(str) - 1;
    
    while(str[begin] == ' ') {
        ++begin;
    }

    while(str[end] == ' ') {
        --end;
    }

    int len = end - begin + 1;

    for (int i = 0; i <= len; ++i) {
        str[i] = str[i + begin];
    }

    str[len] = '\0';
}

char*   trimImmut(const char* str) {
    char* res = malloc(strlen(str) * sizeof(char));
    strcpy(res, str);
    trimMut(res);

    return res;
}

void    squeezeMut(char str[]) {
    int j = 0;

    for (int i = j = 0; str[i] != '\0'; ++i) {

        if (str[i] != ' ') {
            str[j] = str[i];
            ++j;
        }
    str[j] = '\0';
    }
}

char*   squeezeImmut(const char* str) {
    char* res = malloc(strlen(str) * sizeof(char));
    strcpy(res, str);
    squeezeMut(res);

    return res;
}

void    filterMut(char str[]) {
    int j = 0;

    for (int i = 0; str[i] != '\0'; ++i){

        if (str[i] == ' ' ||
                str[i] >= 'a' && str[i] <= 'z' ||
                str[i] >= 'A' && str[i] <= 'Z' ||
                str[i] >= '0' && str[i] <= '9') {
            str[j] = str[i];
            ++j;
        }
   }

   str[j] = '\0';
}

char*   filterImmut(const char* str) {
    char* res = malloc(strlen(str) * sizeof(char));
    strcpy(res, str);
    filterMut(res);
    
    return res;
}

int     isLetter(char* str) {
    int let;

    while (*str) {

        if (*str >= 'A' && *str <= 'Z' || *str >= 'a' && *str <= 'z' || *str == ' ') {
            let = 1;
        }

        else {
            let = 0;
            return let;
        }
        ++str;
    }

    return let;
}

int     isNumber(char* str) {
    int num;

    while (*str) {

        if (*str >= '0' && *str <= '9' || str[0] == '-') {
            num = 1;
        }

        else {
            num = 0;
            return num;
        }
            ++str;
    }

    return num;
}