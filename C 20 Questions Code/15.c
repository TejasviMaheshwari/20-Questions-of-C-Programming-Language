#include<stdio.h>
#include<string.h>
/*WAP to input 3X3 matrix from user and print sum of all rows elements.  */
void main()
{
    int A[3][3];
    int i , j ,s =0;
    printf("Enter Element of Matrix -- \n");
    for(i =0; i<3 ; i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nElement of Matrix Are -- \n");
    for(i =0; i<3 ; i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSum of array elements are -- \n\n");
    for(i=0;i<3;i++){
            s=0;
            for(j=0 ;j<3;j++){
            printf("%d ",A[i][j]);
            s = s + A[i][j];
        }
        printf(" = %d \n",s);
    }
}

