import java.io.*;
import java.util.*;
 
public class D {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder out = new StringBuilder();
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            ArrayList<Integer>[] adj = new ArrayList[n + 1];
            for (int i = 1; i <= n; i++) adj[i] = new ArrayList<>();
            int[] arr = new int[n + 1];
 
            for (int i = 0; i < n - 1; i++) {
                StringTokenizer st = new StringTokenizer(br.readLine());
                int u = Integer.parseInt(st.nextToken());
                int v = Integer.parseInt(st.nextToken());
                adj[u].add(v);
                adj[v].add(u);
                arr[u]++; arr[v]++;
            }
 
            if (n == 2) {
                out.append(0).append('
');
                continue;
            }
 
            int count = 0;
            for (int i = 1; i <= n; i++) if (arr[i] == 1) count++;
 
            int maxLeaves = 0;
            for (int v = 1; v <= n; v++) {
                int cnt = 0;
                for (int nb : adj[v]) {
                    if (arr[nb] == 1) cnt++;
                }
                if (cnt > maxLeaves) maxLeaves = cnt;
            }
 
            out.append(count - maxLeaves).append('
');
        }
        System.out.print(out.toString());
    }
}