#include <stdio.h>
#include <string.h>
#include <ctype.h>

void crazy(char s[]);

int main()
{
    char s[100];
    printf("Enter a line: ");
    scanf(" %[^\n]", &s);

    crazy(s);
}

void crazy(char s[])
{
    int i, x, y;
    //int n = sizeof((char *)s);
    // char ;a = '#';
    // char b = '&'
    for (i = 0; s[i] != '\0'; i++)
    {

        if (isupper(s[i]))
        {
            s[i] = '#';
        }
        else if (islower(s[i]))
        {
            s[i] = '&';
        }
    }
    printf("%s\n", s);
}