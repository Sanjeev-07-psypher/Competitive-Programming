import java.util.Scanner;
 
public class A110_NearlyLuckyNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        boolean flag = true;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if ((s.charAt(i) == '7' || s.charAt(i) == '4')) {
                count++;
            }
        }
        if (count == 7 || count == 4)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
 
}
 