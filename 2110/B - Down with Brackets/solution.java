import java.util.*;
 
public class B2110_downWithBrackets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            int n = s.length();
            if (n == 2) {
                System.out.println("NO");
                continue;
            }
            int balance = 0;
            boolean canBreak = false;
            for (int i = 0; i < n - 1; i++) { // stop at n-2
                if (s.charAt(i) == '(') balance++;
                else balance--;
                if (balance == 0) {
                    canBreak = true;
                    break;
                }
            }
            System.out.println(canBreak ? "YES" : "NO");
        }
    }
}