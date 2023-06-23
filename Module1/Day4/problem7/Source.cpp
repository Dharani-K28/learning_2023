#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char* string_num[] = { "1", "2", "5", "8", "\0" };
    int res = 0;

    for (int i = 0; i < sizeof(string_num) / sizeof(string_num[0]); i++) {
        if (isdigit(string_num[i][0])) {
            res = res * 10 + atoi(string_num[i]);
        }
    }

    printf("%d\n", res);

    return 0;
}