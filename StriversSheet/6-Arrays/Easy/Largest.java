public class Largest {
    public static void main(String[] args) {
        
        int[] array = {1,2,4,7,85,124,987,12,87};
        int max = array[0];
        for (int i : array) {
            if(max < i)  
                max = i;
        }
        System.out.println("max ele: " + max);
    }
}
