int main(){
    int orderlist[4];

    orderlist[0] = 3;
    printf("hello:%d",orderlist[0]);
    orderlist[1] = 2;
    orderlist[2] = 1;
    orderlist[3] = 0;


    int AddressStructure[12][2] ={{0,0},{3,0},{0,1},{3,1},{0,2},{3,2},{0,3},{3,3},{0,4},{3,4},{0,5},{3,5}};
    int OrederListArry[12][4] ={{0,1,2,3} ,{1,0,2,3},{1,2,0,3},{2,1,0,3},{0,1,3,2},{1,0,3,2},{1,2,3,0},{2,1,3,0},{2,3,0,1},{3,2,0,1},{2,3,1,0},{3,2,1,0}};

    int *PTAddressStructure =AddressStructure;

    int *PTOrederListArry = OrederListArry;

    int **PTA[]={PTOrederListArry,PTAddressStructure};

    for (int i =0; i<12;i++){
        if(orderlist[0]==PTA[0][i][0]&& orderlist[1]==PTA[0][i][1]&&orderlist[2]==PTA[0][i][2]&&orderlist[2]==PTA[0][i][3]){
            printf("a: b: %d %d\n",PTA[0][i][0],PTA[1][i][1]);
        }


    };


    }
