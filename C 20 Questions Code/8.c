#include<stdio.h>
#include<string.h>
/*WAP to input a number from user and print its binary number.*/
void main()
{
    int n , i , m ;
    char bin[20];
    printf("Enter a Decimal Number -- ");
    scanf("%d",&n);
    printf("Binary of Given Number %d is -- ",n);
    for(i = 0 ; n > 0 ; n = n / 2, i++ ){
            bin[i] = (n % 2)+48 ;
    }
    bin[i] = '\0';
    strrev(bin);
    printf("%s\n\n",bin);
}

