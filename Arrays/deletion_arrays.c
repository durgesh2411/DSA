#include<stdio.h>
int main(){
    int arr[100],size,i,pos;     //global variable (this can be called at any time)
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements of arrays:");
    for( i=1;i<size;i++){
        scanf("%d", & arr[i]);
    }
    //printf("%d", arr);     doubt?
    printf("Ether the positon you want to delete value:");
    scanf("%d", &pos);
    for(i=pos-1;i<=size-2;i++){
        arr[i]=arr[i+1];      
    }
    size--;
    for(i=0;i<size;i++){ 
        printf("%d\t", arr[i]); 
    }
    
    return 0;

}