#include<stdio.h>
#include<string.h>
/*WAP to input 3X3 matrix from user and print sum of all column element.  */
void main()
{
    int A[3][3];
    int i , j  ,s[3];
    printf("Enter Element of Matrix -- \n");
    for(i =0; i<3 ; i++){
        for(j=0;j<3;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Element of Matrix Are -- \n");
    for(i =0; i<3 ; i++){
            for(j=0;j<3;j++){
                printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSum of array elements are -- \n\n");
    for(i=0;i<3;i++){
    s[i]=0;
        for(j=0,s[i]=0 ;j<3;j++){
            s[i] = s[i] + A[j][i];
            printf("%2d  ",A[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");
    printf("%2d  %2d  %2d  \n",s[0],s[1],s[2]);
}
