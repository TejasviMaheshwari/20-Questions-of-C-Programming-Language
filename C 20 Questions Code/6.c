#include<stdio.h>
/*WAP to input a limit from user and print all Armstrong numbers between limit.*/
void main()
{
    int j , n, l, t, arm ,i , p;
    printf("Enter a Limit -- ");
    scanf("%d",&n);
    for(j = 1 ; j <=n ; j++){
        for (l = 0 , t = j; t > 0 ; l++ , t = t / 10);
        for (t = j ,arm = 0;t > 0 ; t = t / 10 ){
                for ( i = 1 , p = 1 ; i<=l ; i++)
                p = p * ( t % 10 );
        arm = arm + p;
        }

    if (arm == j)
        printf("%d   ",j);
    }
}

