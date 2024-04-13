import java.util.Scanner;

public class CountDigits{
    public static void main(String[] args) {
        System.out.println("Enter a digit");
        Scanner inputScanner = new Scanner(System.in);
        int a =  inputScanner.nextInt();

        System.out.println("Number of digits is: " + (int)Math.ceil(Math.log10(a)));
    }
}