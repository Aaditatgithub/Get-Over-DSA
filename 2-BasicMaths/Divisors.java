import java.util.Scanner;

public class Divisors {
    public static void main(String[] args) {
        System.out.println("Enter num: ");
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        for(int i = 1; i <= (int)Math.sqrt(a); i++){
            if(a % i == 0){
                System.out.println(i + " " + a/i);
            }
        }
    }
}
