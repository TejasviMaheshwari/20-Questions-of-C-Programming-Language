/*WAP to input 10 array elements from user and find first and second maximum numbers.*/
#include<stdio.h>
#include<string.h>
void main()
{
    int arr[10] ;
    int i , N = 10, m1,m2 ;
    m1 = m2 = 0;
    for(i = 0 ; i<N ; i++){
        printf("\nEnter %d Element -- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are -- \n\n");
    for(i = 0 ; i<N ; i++)
        printf("%d ",arr[i]);
        printf("\n\n After Calculation -- \n\n");
        for(i = 0 ; i < N ; i++){
                if(arr[i] > m1){
                    m2 = m1 ;
                    m1 = arr[i];
            }
            else if(arr[i] > m2 && arr[i] < m1){
                    m2 = arr[i];
            }
        }
    printf("First Maximum is -- %d \n\n",m1);
    printf("Second Maximum is -- %d \n\n",m2);
}

