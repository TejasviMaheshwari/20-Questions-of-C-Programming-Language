/*. WAP to input 10 elements from user and insert new element at a given position by user.  */
#include<stdio.h>
void main()
{
    int arr[10];
    int i, N = 10, index, data;
    printf("Enter 10 elements -- \n");
    for (i = 0; i < N; i++){
        printf("%d. - ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nGiven array is : ");
    for (i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    while(1){
        printf("Enter an index to change the value from : ");
        scanf("%d", &index);
        if (index >= N || index < 0){
            printf("\nThe index you entered is not correct..\n");
            printf("Enter an index between 0-%d\n\n",N-1);
        }
        else
            break;
    }
    printf("Enter the data you want to enter : ");
    scanf("%d", &data);
    arr[index] = data;
    printf("\nNew Array is : ");
    for (i = 0; i < N; i++){
            printf("%d ", arr[i]);
    }
}
