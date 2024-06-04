import java.util.Scanner;

public class ReverseANumber {
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        
        int a = sc.nextInt();
        int revNumber = 0;
        while(a != 0){
            revNumber = revNumber*10 + a%10;
            a /= 10;
        }

        System.out.println(revNumber);
    }
}
