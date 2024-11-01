

public class RotateArray {
        public static void solve(int[] arr, int n){
            int temp = arr[0]; // storing the first element of array in a variable
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            arr[n - 1] = temp;
        }
    public static void main(String[] args) {
        int[] arr = new int[] {7,1,2,3,4,5,6};
       
        solve(arr, arr.length);
        solve(arr, arr.length);
        solve(arr, arr.length);

        for (int i : arr) {
            System.out.println(i + " ");
        }
    }
}
