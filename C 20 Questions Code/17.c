#include<stdio.h>
#include<string.h>
/*WAP to declare two 3X3 matrix and input dimensions by user and then check it,
if dimensions are correct then multiply it else print error message. */
void main()
{
    int A [5][5], B[5][5], C[5][5];
    int i, j, k, R1, C1, R2, C2;
    printf("Matrix Multiplications -- \n\n");
    printf("Enter Size of Array -- (Max size = 3) -- \n\n");
    printf("Enter First matrix Size -- \n");
    printf("Rows -- ");
    scanf("%d",&R1);
    printf("Cols -- ");
    scanf("%d",&C1);
    printf("Enter Second matrix Size -- \n");
    printf("Rows -- ");
    scanf("%d",&R2);
    printf("Cols -- ");
    scanf("%d",&C2);
    if(C1 == R2){
        printf("\nEnter First Array Elements -- \n\n");
        for(i=0; i<R1;i++){
            for(j=0;j<C1;j++){
                scanf("%d",&A[i][j]);
            }
        }
        printf("\nEnter Second Array Elements -- \n\n");
        for(i=0; i<R2;i++){
            for(j=0;j<C2;j++){
                scanf("%d",&B[i][j]);
            }
        }
        printf("\nEnter First Array Elements -- \n\n");
        for(i=0; i<R1;i++){
            for(j=0;j<C1;j++){
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter Second Array Elements -- \n\n");
        for(i=0; i<R2;i++){
            for(j=0;j<C2;j++){
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
        printf("\nAfter Multiplication Matrix Elements are = \n\n");
        for(i=0;i<R1;i++){
            for(j=0;j<C2;j++){
                C[i][j]=0;
                for(k=0;k<C1;k++){
                    C[i][j]=C[i][j] + A[i][k] * B[k][j];
                }
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\n\nYou enter Invalid Array Size , Please Enter Valid Size \n\n");
    }
}
