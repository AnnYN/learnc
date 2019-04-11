//
// Created by YaNan on 2019/4/11.
//
//array
// to  get sum of n different elements
#include <stdio.h>

int main(){

    int a[5];
    int n;
int ele;
    printf("Enter size of array");
    scanf("%d",&n);//5

    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d",&ele);
int chk = 0;

    for(int j=0;j<=n-1;j++){
        if (ele==a[j]){
            chk++;
        }
       // printf("\nvalue at a[%d] is : %d",j,a[j]);
    }
    if(chk==0){
        printf("\n Element does not exit");
    }
    else{
        printf("\n Element is found %d time", chk);
    }
}