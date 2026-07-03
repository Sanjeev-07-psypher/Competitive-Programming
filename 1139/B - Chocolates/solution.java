import java.util.*;
 
public class B1139{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long arr[] = new long[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        long sum=0;
        sum+=arr[n-1];
        
        long max=arr[n-1]-1;
        for(int i=n-2;i>=0;i--){
            sum+=Math.min(max, arr[i]);
            max=Math.min(max,arr[i])-1;
            if(max<=0) break;
        }
        System.out.println(sum);
    }
}