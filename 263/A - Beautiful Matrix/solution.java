import java.util.*;
public class A263_BeautifulMatrix{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[][]=new int[5][5];
        int x=0,y=0;
        boolean flag=false;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                arr[i][j]=sc.nextInt();
                if(arr[i][j]==1){
                    x=i;
                    y=j;
                    flag=true;
                }
            }
        }
        if(flag) System.out.println(Math.abs(x-2)+Math.abs(y-2));
        else System.out.println(0);
    }
}