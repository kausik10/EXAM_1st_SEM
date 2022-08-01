#include<stdio.h>
#include<ctype.h>
void countchar(char str[], int *pv, int *pc, int *ps, int *pw, int *po, int *pd);
int main()
{
    char str[80];
    int vowel=0, cons=0, space=0, words=0, others=0, digits =0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);


    countchar(str, &vowel, &cons, &space,&words, &others, &digits);

    printf("Total vowels: %d\n", vowel);
    printf("Total consonants: %d\n", cons);
    printf("Total digits: %d\n", digits);
    printf("Total whitespace: %d\n", space);
    printf("Total words: %d\n", words);
    return 0;
}

void countchar(char str[], int *pv, int *pc, int *ps, int *pw, int *po, int *pd)
{
    char c;
    int count = 0;

    while((c = toupper(str[count])) != '\0')
    {
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            ++ *pv;
        else if(c >= 'A' && c <= 'Z')
            ++ *pc;
        else if(c >= '0' && c <= '9')
            ++ *pd;
        else if(c == ' ' || c == '\t')
        {    ++ *ps;
            *pw += *ps;
        }
        else
            ++ *po;
        
    
    count++;
    }
}