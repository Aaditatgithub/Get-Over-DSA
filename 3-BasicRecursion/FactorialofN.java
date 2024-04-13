
public class FactorialofN {
    static long Factorial(int a){
        if(a == 2) return a;
        return Factorial(a-1) * a;
    }
    public static void main(String[] args) {
        System.out.println(Factorial(3));
    }    
}
