#include<stdio.h>
#include<string.h>
/*WAP to input 10 elements from user and sort it in ascending order and print it using Selection Sort & bubble sort. (Choose sorting option from user) */
void main()
{
    int arr[10] ;
    int i=0 , j , t ,N=10;
    char c;
    for (i=0;i<N;i++){
        printf("%d Element -- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray Elements are -- \n\n");
    for(i = 0 ; i<N ; i++){
        printf("%d   ",arr[i]);
    }
    printf("\n\nWhat You Want.. \n\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    c = getch();
    if(c ='1'){
        printf("\nYou Choose Selection Sorting\n\n");
        for(i=0;i<N;i++){
                for(j=i+1;j<N ;j++){
                    if(arr[i]>arr[j]){
                        t=arr[i];
                        arr[i]=arr[j];
                        arr[j]=t;
                }
            }
        }
        printf("Array Elements are -- \n\n");
        for(i=0;i<N;i++){
            printf("%d  ",arr[i]);
        }
    }else if (c = '2'){
            printf("\nYou Choose Bubble Sorting\n\n");
            for(i=0;i<N;i++){
                for(j=i+1;j<N;j++){
                    if(arr[j]>arr[j+1]){
                        t=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=t;
                }
            }
        }
        printf("Array Elements are -- \n\n");
        for(i=0;i<N;i++){
            printf("%d  ",arr[i]);
        }
    }
    else
        printf("You Enter Wrong input ...");
}
