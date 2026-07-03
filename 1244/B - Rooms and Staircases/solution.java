import java.util.Scanner;
 
public class B1244_RoomsAndStaircases {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
                //My approach
             
        // while(t-->0){
        //     int n=sc.nextInt();
        //     String s=sc.next();
        //     int count=0;
        //     for(int i=0;i<n;i++){
        //         if(s.charAt(i)=='0'){
        //             count++;
        //         } 
        //         else{
        //              count+=2;
        //         }
        //     }
        //     // System.out.println(count);
        //     if(s.charAt(0)=='1' || s.charAt(n-1)=='1') System.out.println(2*s.length());
        //     else System.out.println(count);
        // }
        while(t-->0){
            int n=sc.nextInt();
            String s=sc.next();
            int ans=n;
            int count=0;
            for(int i=0;i<n;i++){
                count++;
                if(s.charAt(i)=='1'){
                    ans=Math.max(ans,(i+1)*2);
                    count++;
                }
            }
            ans=Math.max(ans,count);
            StringBuilder newS=new StringBuilder(s);
            newS.reverse();
            s= newS.toString();
            count=0;
            for(int i=0;i<n;i++){
                count++;
                if(s.charAt(i)=='1'){
                    ans=Math.max(ans,(i+1)*2);
                    count++;
                }
            }
            System.out.println(ans);
        }
 
    }
}