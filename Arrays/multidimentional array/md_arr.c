int main()
{
    int arr[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int j,i;
    // for(i = 0; i<5; i++){
    //     for(j=0; j<2; j++){              //<-----------row wise output------------->
    //         printf("%d",arr[i][j]);
    //     }
    //     printf(" ");
    //     }

        for(i = 0; i<2; i++){
        for(j=0; j<5; j++){
            printf("%d",arr[j][i]);       <---------column wise output------------>
        }
        printf(" ");
    
    }