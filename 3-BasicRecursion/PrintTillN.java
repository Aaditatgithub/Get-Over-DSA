public class PrintTillN{
    static void print(int a){
        
        if(a == 0) return;
        System.out.println(a);
        print(a-1);
    }
    public static void main(String[] args) {
        print(10);
    }
}