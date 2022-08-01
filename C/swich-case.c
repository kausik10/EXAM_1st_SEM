#include<stdio.h>

int main()
{
    int choice;

    printf("\nTo end, type 0\n\n");
    printf("Enter your choice:(1-7): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 0:
            printf("Goodbye.");
            break;
        case 1:
            
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        default:
            printf("No match. Input between 1 and 7 \n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

    }
    return 0;
}