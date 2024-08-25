int main(){
    int arr[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int i,j,sum = 0;
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
        sum+=arr[i][0];
        }
    }
    printf("%d\n",sum);
    return 0;
}
