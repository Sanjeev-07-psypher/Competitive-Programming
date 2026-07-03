import java.util.Scanner;
 
public class A151_SoftDrinking {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int p = sc.nextInt();
        int nl = sc.nextInt();
        int np = sc.nextInt();
 
        int DrinkPerToast = (k*l)/nl;
        // System.out.println(DrinkPerToast);
        int totalLimes = (c*d); //total slices of lime (1 slice of lime needed for 1 toast)
        int gramsOfsaltPerToast=p/np;
        int noOfToasts = Math.min(DrinkPerToast, Math.min(totalLimes, gramsOfsaltPerToast));
        noOfToasts = noOfToasts/n;
        System.out.println(noOfToasts);
 
 
 
    }
}