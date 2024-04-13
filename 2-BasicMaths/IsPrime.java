public class IsPrime {
    public static void main(String[] args) {
        int prime = 292;
        for(int i = 2; i <= (int)Math.sqrt(prime); i++){
            if(prime % i == 0){
                System.out.println("not prime");
                break;
            }
        }
    }
}
