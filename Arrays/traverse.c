#include<stdio.h>
int main(){
    int arr[50];               //compile time intialization(non dynamic fix array size limit)
    int size,i;
    printf("Enter the size of the arr :");
    scanf("%d", &size);
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);       
    }
    printf("the array list is:");
    for(i=0;i<size;i++){
        printf("%d", arr[i]);
    }
    return 0;

}