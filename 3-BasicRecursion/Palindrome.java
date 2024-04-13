public class Palindrome{
    static void isPali(String str, int start, int end){
        if((str.charAt(start) != str.charAt(end))){
            System.out.println("not palindrome");
            return;
        }
        else{
            if(start >= end) {System.out.println("palindrome"); return ;}
            isPali(str, start + 1, end - 1);
        }
    }
    public static void main(String[] args) {
        isPali("RaceecaR", 0, 7);
    }
}