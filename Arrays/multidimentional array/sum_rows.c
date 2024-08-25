#include <stdio.h>

int main() {
    int arr[5][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10},{11, 12, 13, 14, 15},{16, 17, 18, 19, 20},{21, 22, 23, 24, 25}};

    printf("\nSum of each row:\n");
    for (int i = 0; i < 5; i++) {
        int row_sum = 0;
        for (int j = 0; j < 5; j++) {
            row_sum += arr[i][j];
        }
        printf("Row %d: %d\n", i + 1, row_sum);
    }

    return 0;
}
