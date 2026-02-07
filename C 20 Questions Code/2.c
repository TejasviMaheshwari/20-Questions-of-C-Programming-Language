#include<stdio.h>
/*WAP to input a number from user and check number is one, two or three digit using else if ladder.*/
void main()
{
    int n;
    printf("Enter a Number -- ");
    scanf("%d",&n);
    if (n>0 && n<=9 ){
            printf("One Digit Number");
    }else if (n>=10 && n<=99 ){
        printf("Two Digit Number");
        }else if (n>=100 && n<=999 ){
            printf("Three Digit Number");
        }else{
        printf("Wrong Input");
        }
}

