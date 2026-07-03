import java.util.*;
 
public class C1742_Strips {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        char arr[][]=new char[8][8];
        while(t-->0){
            for (int i = 0; i < 8; i++) {
                String row = sc.next(); // read the whole row as a string
                for (int j = 0; j < 8; j++) {
                    arr[i][j] = row.charAt(j);
                }
            }
 
            //algo
            boolean redRow=false;
            for(int i=0;i<8;i++){
                boolean allRed = true;
                for(int j=0;j<8;j++){
                    if(arr[i][j]!='R') {
                        allRed=false;
                        break;
                    }
                }
                if(allRed){
                    redRow=true;
                    break;
                }
            }
            if(redRow) System.out.println("R");
            else System.out.println("B");
        }
    }
}