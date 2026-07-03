import java.util.Scanner;
 
public class A1027_PalindomicTwist{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        while(t-->0){
            boolean flag=true;
            int n=sc.nextInt();
            String s=sc.next();
            int i=0,j=n-1;
            while(i<j){
                if(s.charAt(i)!=s.charAt(j)){
                    int diff =Math.abs(s.charAt(i)-s.charAt(j));
                    if(diff!=2){
                        flag=false;
                        break;
                    }
                }
                i++;
                j--;
            }
            if(flag) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}