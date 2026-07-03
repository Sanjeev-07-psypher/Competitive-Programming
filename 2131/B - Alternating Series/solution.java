import java.util.*;
 
public class  B{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        StringBuilder out = new StringBuilder();
        while (t-- > 0) {
            int n = sc.nextInt();
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 1) {
                    out.append("-1");
                } else {
                    if (i == n) out.append("2");
                    else out.append("3");
                }
                if (i < n) out.append(" ");
            }
            out.append("
");
        }
        System.out.print(out.toString());
        sc.close();
    }
}