#include<stdio.h>
/*WAP to input a limit from user and print the following series.
( 1, 8 , 72, 46, 521… n).*/
void main()
{
    int i, l, n , r;
    printf("Enter a limit -- ");
    scanf("%d",&l);
    for( i = 1 ; i<= l ; i++){
        n = i*i*i ;
        for(r = 0;n > 0;(r=r*10 + (n%10)),n=n/10);
        printf("%d   ",r);
    }
}
