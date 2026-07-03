import java.util.*;
 
public class A258_ElephantsAndBits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str=sc.next();
        StringBuilder ans = new StringBuilder();
        boolean flag = true;
        for(int i=0;i<str.length();i++){
            if(flag && str.charAt(i)-'0'==0){
                flag=false;
                continue;
            }
            ans.append(str.charAt(i));
        }
        if(flag) ans.deleteCharAt(0);
        System.out.println(ans);
    }
}
 