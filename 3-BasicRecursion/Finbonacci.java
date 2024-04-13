public class Finbonacci {
    static int Fibo(int i){
        if(i == 0 || i == 1) return i;
        return (Fibo(i - 1) + Fibo(i - 2));
    }
    public static void main(String[] args) {
        System.out.println(Fibo(5));
    }
}
