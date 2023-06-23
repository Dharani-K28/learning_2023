#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i;
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);  // Read the input string using fgets

    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }

    printf("String in toggle case = '%s'\n", s);

    return 0;
}