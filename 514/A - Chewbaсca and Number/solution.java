import java.util.Scanner;
 
public class A514{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        StringBuilder str = new StringBuilder();
        if(s.charAt(0)=='9') str.append('9');
        else {
            int d = s.charAt(0) - '0';
            int inverted = 9 - d;
            str.append((char)(Math.min(d, inverted) + '0'));
        }
        for(int i=1;i<s.length();i++){
            int d = s.charAt(i) - '0';
            int inverted = 9 - d;
            str.append((char)(Math.min(d, inverted) + '0'));
        }
        System.out.println(str);
    }
}