import java.util.*;
 
public class A723TheNewYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[]=new int[3];
        for(int i=0;i<3;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        double dist=Math.sqrt(Math.pow(arr[2]-arr[0],2));
        System.out.println((int)dist);
    }
}