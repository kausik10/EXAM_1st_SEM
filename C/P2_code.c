#include<stdio.h>
#include<ctype.h>

int main()
{
    int i, n;
    char sen[100];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sen);

    for(i=0; sen[i] != '\0';i++)
    {
        if (((sen[i] >= 'A' && sen[i] < 'Y')) ||
            (sen[i] >= 'a' && sen[i] < 'y') || 
            (sen[i] >= '0' && sen[i] < '8'))
                putchar(sen[i] + 2);
        else if(sen[i] == 'Y')
            putchar('A');
        else if(sen[i] == 'Z')
            putchar('B');
        else if(sen[i] == 'y')
            putchar('a');
        else if(sen[i] == 'z')
            putchar('b');
        else if(sen[i] == '8')
            putchar('0');
        else if(sen[i] == '9')
            putchar('1');
            
        else
            putchar('_');
    }
    return 0;
}