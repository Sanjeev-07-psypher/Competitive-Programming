import java.util.*;
 
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 0; i < n; i++) a[i] = sc.nextInt();
            for (int i = 0; i < n; i++) b[i] = sc.nextInt();
            int iterations = 0;
            while (true) {
                boolean flag = false;
                for (int i = 0; i < n; i++) {
                    if (a[i] > b[i]) {
                        a[i]--;
                        flag = true;
                        break; 
                    }
                }
                iterations++;
                if (!flag) break;
                for (int i = 0; i < n; i++) {
                    if (a[i] < b[i]) {
                        a[i]++;
                        break;
                    }
                }
            }
 
            System.out.println(iterations);
        }
    }
}