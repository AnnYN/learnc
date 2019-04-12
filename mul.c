//
// Created by YaNan on 2019/4/12.
//
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],mul[10][10];
    int r,c ,ra,ca,rb,cb,k;
    printf("Enter order of matrix A: \n");
    scanf("%d%d",&ra,&ca);
    printf("Enter order of matrix B: \n");
    scanf("%d%d",&rb,&cb);


    printf("Enter elements of matrix A: \n");
    for(r=0;r<ra;r++){

        for(c=0;c<ca;c++){
            scanf("%d",&a[r][c]);
        }



    }


    printf("Enter elements of matrix B: \n");
    for(r=0;r<rb;r++){

        for(c=0;c<cb;c++){
            scanf("%d",&b[r][c]);
        }


    }

    printf("Element of mul matrix:\n");
    if(ca==rb){
        for(r=0;r<ra;r++){
            for(c=0;c<cb;c++){
                for(k=0;k<ca;k++){

                 mul[r][c] = mul[r][c] + a[r][k]*b[k][c];
                }

            printf("%d ",mul[r][c]);
            }
            printf("\n");
        }

    }



    else{
        printf("Matrix A must has the same  col as Matrix B");
    }






}