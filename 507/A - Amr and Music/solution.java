import java.util.*;
 
public class A507_ArmNMusic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int noOfinstru=sc.nextInt();
        int noOfDays=sc.nextInt();
        int sum=0;
        boolean flag=true;
        int arr[]=new int[noOfinstru];
        for(int i=0;i<noOfinstru;i++){
            arr[i]=sc.nextInt();
        }
        //array 2D to store sorted values of days and its respective index
        int[][] pairs = new int[arr.length][2];
        for (int i = 0; i < arr.length; i++) {
            pairs[i][0] = arr[i];  // value
            pairs[i][1] = i+1;       // index
        }
 
        Arrays.sort(pairs,(a,b)->Integer.compare(a[0], b[0]));
        int k=0;
        int indices[]=new int[noOfinstru];
        for(int i=0;i<noOfinstru;i++){
            if(pairs[i][0]<=noOfDays){
                indices[k]=pairs[i][1];
                k++;
                noOfDays-=pairs[i][0];
            }else{
                break;
            }
        }
        System.out.println(k);
        for(int i=0;i<indices.length;i++){
            if(indices[i]==0) continue;
            System.out.print(indices[i]+" ");
        }
    }
}