#include<stdio.h>
/*WAP to input a limit from user and print Fibonacci Series.*/
void main()
{
    int limit, a = 0, b = 1, c = a+b;
    int i;
    printf("Enter a limit for series -- ");
    scanf("%d", &limit);
    printf("\nSeries - ");
    for (i = 1; i <= limit; i++){
        if (i < 3) printf("%d ", i-1);
        else{
            printf("%d ", c);
            a = b;
            b = c;
            c = a+b;
        }
    }
}

