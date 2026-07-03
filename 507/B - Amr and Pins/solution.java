import java.util.Scanner;
 
public class B507_ArmNPins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
 
        double dist = Math.sqrt((Math.pow(x1-x,2))+Math.pow(y1-y,2));
        double ans=Math.ceil(dist/(2*r));
        System.out.println((int)ans);
    }
}