import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class ReverseArray {
    static void printArray(int arr[], int n) {
        System.out.print("Reversed array is:- \n");
        for (int i = 0; i < n; i++) {
           System.out.print(arr[i] + " ");
        }
     }
    static void reverseArray(int arr[], int start, int end) {
        if (start < end) {
           int tmp = arr[start];
           arr[start] = arr[end];
           arr[end] = tmp;
           reverseArray(arr, start + 1, end - 1);
        }
     }
    public static void main(String[] args) {
        int n = 5;
        // int arr[] = { 5, 4, 3, 2, 1};
    //   reverseArray(arr, 0, n - 1);
    //   printArray(arr, n);
        Scanner scanner = new Scanner(System.in);
        Integer[] arr = new Integer[5];
        for(int i = 0; i < arr.length; i++){
            arr[i] = scanner.nextInt();
        }

        Collections.reverse(Arrays.asList(arr));
        for (Integer integer : arr) {
            System.out.println(integer);
        }
    }    
}
