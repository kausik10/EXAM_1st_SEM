/*
Consider that you are a student ofgrade l0 studying 5 subjects. The scores of4 courses you
obtainedarearranged inanarray Score [4] = i86, 45, 51, 61].Thehighestmark
you can score in any subject is 100 and the minimum score to pass any subject is 40. You have
to write a program that calculates a number that you need to score in 5th subject to get certain
percentage. Following test cases show how your program should work. t8l
Test Case # I
Enter the percentage you want to score: 78
Impossible to score.
Test Case #2
Enter the percentage you want to score: 60
The mark you have to score in 5th subject is: 57
Test Case #3
Enter the percentage you want to score: 45
The minimum percentage you can score is: 56.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int score[4] = {86, 45, 51, 61};

    int percent;
    int marks;
    int min_percent;
    int i, min=0;
    
    printf("Enter percent you want: ");
    scanf("%d", &percent);

    for(i=0; i<4; i++)
    {
        min += score[i];
    }

    int store = min+40;
        
    min_percent =  ((store*100)) / 500;
       
    
   while(percent != 0)
   {

    marks = ((percent * 500 )/100) - min;
    
    if(marks < 100 && marks >= 40)
    {
        printf("\nMarks in 5th subject: %d\n", marks);
        printf("\nEnter percentage: ");
        scanf("%d", &percent);
    }
    else
    {
        if(percent < min_percent)
    {
        printf("\nMin_percent: %d\n", min_percent);
        //break;
    }
        printf("\nNot possible.\n");
        printf("\nEnter percentage: ");
        scanf("%d", &percent);
    }
    
   }
}