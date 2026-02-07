/*WAP to input 10 elements from user and search an element that is given by user and print it.*/
#include<stdio.h>
#include<string.h>
void main ()
{
    int arr[10] ;
    int N = 10 , i , c = 0 , data;
    for(i = 0 ; i<N ; i++){
        printf("\nEnter %d Element -- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array Element are -- \n\n");
    for(i = 0 ; i<N ; i++)
        printf("%d ",arr[i]);
        printf("\n\nEnter the Data You Want to Search -- ");
        scanf("%d",&data);
    printf("\n\nAfter Search -- \n\n");
    for(i = 0 ;i < N ; i++){
        if(arr[i] == data ){
            printf("\nData Found ... %d \n\n",data);
            c = 1 ;
            break;
        }
    }
    if (c == 0)
    printf("\nData Not Found .. \n\n");
}
