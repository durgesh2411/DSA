#include<stdio.h>
int main(){
    int arr[5]={2,4,5,3,7};
    int size,pos,num,i;
    printf("Enter the size array:");
    scanf("%d", &size);
    if(size>5){
        printf("overflow");
    }
    else{
        printf("Enter position of num to be add:");
        scanf("%d", &pos);
        if(pos<0 || pos>size+1){
            printf("Invalid postion");
        }
        else{
            printf("Enter the num to be add:");
            scanf("%d", &num);     
            for(i=size-1;i<=pos-1;i--){
                arr[i+1]=arr[i];
            }
            arr[pos-1]=num;
             for(i=0;i<size;i++){ 
        printf("%d\t", arr[i]); 
    }

             }
    }
    return 0;
}