#include<stdio.h>
/*
WAP to print following Pattern:
     X
    X X
   X X X
  X X X X
 X X X X X
  X X X X
   X X X
    X X
     X
*/
void main()
{
    int n = 5,i , j , x = 1 , s = n ;
    for (i = 1; i<= n+n-1;i++){
        printf("%*c",s,' ');
        for (j = 1 ; j <=x ; j++){
                printf("X ");
            }
            x = (i < n )? ++x : --x;
        s = (i < n )? --s : ++s;
        printf("\n");
    }
}
