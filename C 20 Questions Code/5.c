#include<stdio.h>
/*WAP to input a number from user and check number is prime or not, using while loop.*/
void main()
{
    int n , i = 2,c=0;
    printf("Enter a Number -- ");
    scanf("%d",&n);
    while ( i <= n){
        if (n % i == 0)
        c++;
        i++;
    }
    if ( c == 1 ){
        printf("%d is A Prime Number\n\n",n);
    }else {
        1printf("%d is Not A Prime Number\n\n",n);
    }
}

