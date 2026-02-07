#include<stdio.h>
#include<string.h>
/*WAP to input a String from user and print it in the following pattern.
(Example: Input Data – DOG, Output – D, DO, DOG, O, OG, G).  */
void main()
{
    char str[10];
    char t[10];
    printf("Enter a string -- ");
    scanf("%s",&str);
    int i , j , x ;
    for( i = 0 ; i< strlen(str);i++){
        for (j = i, x=0; j<strlen(str);j++){
            t[x++] = str[j];
            t[x] = '\0';
            t[x] = '\0';
            printf("%s  ",t);
        }
    }
}
