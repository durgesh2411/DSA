public class TwoDToOneD {
    public static void main(String[] args) {
        int[][] arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int rows = arr.length;
        int cols = arr[0].length;
        int[] arr1D = new int[rows * cols];
        int index = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr1D[index++] = arr[i][j];
            }
        }
        System.out.println("2D Array: " + Arrays.deepToString(arr));
        System.out.println("1D Array: " + Arrays.toString(arr1D));
    }
}
