   #include <stdio.h>

int main() {
    int arr[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};

    printf("\nElements in the array are:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nColumn Sum:\n");
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += arr[j][i];
        }
        printf("Sum of column %d: %d\n", i, sum);
    }

    return 0;
}
   
   
   
   
   
    