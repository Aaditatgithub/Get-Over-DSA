public class SecondLargest {
    public static void main(String[] args) {
        int large = Integer.MIN_VALUE;
        int SecondLargest = Integer.MIN_VALUE;

        int[] array = new int[]{1,65,23,4,8,873,982,46,7,23423,664,22357,3};

        for(int i : array){
            if(i > large){
                SecondLargest = large;
                large = i;
            }
            else if(i > SecondLargest && i < large){
                SecondLargest = i;
            }
        }
        System.out.println("Second Largest is: " + SecondLargest);
    }
}
