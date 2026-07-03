import java.util.Scanner;
 
public class A282 {
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int x=0;
        String str="";
        for(int i=0;i<n;i++){
            str=sc.next();
            if(str.equals("++x") || str.equals("++X")) ++x;
            else if(str.equals("x++") || str.equals("X++")) x++;
            else if(str.equals("x--")|| str.equals("X--")) x--;
            else --x;
            str="";
        }
        System.out.println(x);
    }
}