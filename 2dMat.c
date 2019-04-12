//
// Created by YaNan on 2019/4/12.
//

#include<stdio.h>

int main()
{
    int a[3][3];
    int r,c;
    printf("Enter Elements of matrix A: \n");
    for(r = 0; r<3;r++){

        for (c=0;c<3;c++){

            scanf("%d",&a[r][c]);
        }
    }

    printf("Elements of Matrix A is: \n");
    for(r = 0; r<3;r++){

        for (c=0;c<3;c++){

            printf("%d ",a[r][c]);
        }
        printf("\n");
    }






}
