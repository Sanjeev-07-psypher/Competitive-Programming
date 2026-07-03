import java.io.*;
import java.util.*;
 
public class C {
    static class FastScanner {
        private final InputStream in;
        private final byte[] buffer = new byte[1 << 16];
        private int ptr = 0, len = 0;
        FastScanner(InputStream is) { in = is; }
        private int read() throws IOException {
            if (ptr >= len) {
                len = in.read(buffer);
                ptr = 0;
                if (len <= 0) return -1;
            }
            return buffer[ptr++];
        }
        long nextLong() throws IOException {
            int c;
            while ((c = read()) <= ' ') if (c == -1) return Long.MIN_VALUE;
            int sign = 1;
            if (c == '-') { sign = -1; c = read(); }
            long val = 0;
            while (c > ' ') {
                val = val * 10 + (c - '0');
                c = read();
            }
            return val * sign;
        }
        int nextInt() throws IOException { return (int) nextLong(); }
    }
 
    public static void main(String[] args) throws Exception {
        FastScanner fs = new FastScanner(System.in);
        StringBuilder out = new StringBuilder();
        int t = fs.nextInt();
        while (t-- > 0) {
            int n = fs.nextInt();
            long k = fs.nextLong();
 
            Map<Long, Integer> cntS = new HashMap<>();
            Map<Long, Integer> cntT = new HashMap<>();
 
            for (int i = 0; i < n; i++) {
                long x = fs.nextLong();
                long r = x % k;
                cntS.put(r, cntS.getOrDefault(r, 0) + 1);
            }
            for (int i = 0; i < n; i++) {
                long x = fs.nextLong();
                long r = x % k;
                cntT.put(r, cntT.getOrDefault(r, 0) + 1);
            }
 
            boolean ok = true;
            Set<Long> keys = new HashSet<>();
            keys.addAll(cntS.keySet());
            keys.addAll(cntT.keySet());
            Set<Long> visited = new HashSet<>();
 
            for (long r : keys) {
                if (visited.contains(r)) continue;
                long other = (k - r) % k;
                if (other < 0) other += k;
 
                int s1 = cntS.getOrDefault(r, 0);
                int t1 = cntT.getOrDefault(r, 0);
                int s2 = cntS.getOrDefault(other, 0);
                int t2 = cntT.getOrDefault(other, 0);
 
                if (r == other) {
                    if (s1 != t1) {
                        ok = false;
                        break;
                    }
                } else {
                    if (s1 + s2 != t1 + t2) {
                        ok = false;
                        break;
                    }
                }
                visited.add(r);
                visited.add(other);
            }
 
            out.append(ok ? "YES
" : "NO
");
        }
        System.out.print(out.toString());
    }
}