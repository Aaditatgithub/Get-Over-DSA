public class MonotonicArray {
    public static boolean isMonotonic(int[] nums) {
        int length = nums.length;
        int dropCount = 0;
        for (int i = 1; i < length; i++) {
            if (nums[i] < nums[i - 1]) {
                dropCount++;
            }
        }
        
        if (dropCount == 0) {
            return true; // Array is strictly increasing
        }
        
        if (dropCount == 1 && nums[0] >= nums[length - 1]) {
            return true; // Array has one drop point and the first and last elements are part of the same increasing sequence
        }
        
        return false; // Array is not monotonic
    }

    //Checks whether array isSorted or not (if rotated as well)
    public static void main(String[] args) {
        int[] array = {1, 2, 4, 7, 85, 124, 987, 12, 87};
        System.out.println("Is array monotonic? " + isMonotonic(array));
    }
}
