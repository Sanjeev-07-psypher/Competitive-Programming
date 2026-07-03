import java.util.Scanner;
 
public class A2126{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int y = 10;
            int x=sc.nextInt();
            while(x>0){
                int ld= x%10;
                if(ld<y) y=ld;
                x=x/10;
            }
            System.out.println(y);
        }
    }
}