public class MoveZer{
    public static void main(String[] args) {
        int[] nums = new int[]{12,0,23,12,0,125};
        
        int i = 0;
        for(int j = 0; j < nums.length; j++){
            if(nums[j] == 0) {}
            else{
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
        }

        for (int k : nums) {
            System.out.print(k + " ");
        }
    }
}