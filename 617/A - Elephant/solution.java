import java.util.Scanner;
 
public class A617_Elephant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n=sc.nextInt();
        System.out.println((int)Math.ceil(n/5));
    }
}