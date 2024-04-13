import java.util.HashMap;

public class Occurrence {
    public static void main(String[] args) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] arr = {1, 1, 2, 3, 4, 5, 6, 4, 5, 6, 3};

        for (int i : arr) {
            map.compute(i, (key,value) -> (value == null) ? 1 : value + 1);
        }

        for (int key : map.keySet()) {
            if(map.get(key) == 1){
                System.out.println("Unique number is: " + key);
            }
        }

        // Solution using XOR
        // int ans = 0;
        // for(int i: nums){
        //     ans ^= i;
        // }
        // return ans;
    }
}
