#include<stdio.h>
#include<stdlib.h>
/* WAP to input 10 unique elements from user and print all prime elements available in array.
Validate, if any repeated element from user it’s not accepted by array. */
void main()
{
    int arr[10];
    int i, j, N = 10, check;
    retry:
    system("cls");
    printf("Enter 10 Elements of Array -- \n");
    for (i = 0; i < N; i++){
        printf("%d. - ", i+1);
        scanf("%d",&arr[i]);
    }

    for (i = 1, check = arr[0]; i < N; i++){
        for (j = i; j < N; j++){
            if (arr[j] == check) {
                printf("There are repeated elements in array. Please try again..");
                goto retry;
            }
        }
        check = arr[i];
    }
    printf("\nAll prime numbers in the array are - ");
    for (i = 0; i < N; i++){
        if (arr[i] <= 1)
            continue;
        for (j = 2; arr[i] % j != 0; j++);
        if (j == arr[i]) printf("%d ", arr[i]);
    }
}
