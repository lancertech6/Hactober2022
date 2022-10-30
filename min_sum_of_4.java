public class min_sum_of_4 {
    public int minimumSum(int num) {
        int arr[] = new int[4];
        int c = num;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = c % 10;
            c = c / 10;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = t;
                }
            }
        }
        int a = (arr[0] * 10) + arr[2];
        int b = (arr[1] * 10) + arr[3];
        return a + b;
    }
}
