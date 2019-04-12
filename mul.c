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
    for(r=0;r<ra-1;r++){

        for(c=0;c<ca-1;c++){
            scanf("%d",&a[r][c]);
        }



    }


    printf("Enter elements of matrix B: \n");
    for(r=0;r<rb-1;r++){

        for(c=0;c<cb-1;c++){
            scanf("%d",&b[r][c]);
        }


    }

    if(ca==rb){
        for(r=0;r<ra-1;r++){
            for(c=0;c<cb;c++){
                for(k=0;k<ca-1;k++){
                 mul[r][c] += a[r][k]*b[k][c];
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