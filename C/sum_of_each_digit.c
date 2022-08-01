#include<stdio.h>
#include<string.h>

int main()
{
    int input;
    int i, sum = 0;
    int temp, rem;
    printf("Enter a nummber: ");
    scanf("%d", &input);

    temp = input;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }
    printf("\nSum: %d\n", sum);
    
}