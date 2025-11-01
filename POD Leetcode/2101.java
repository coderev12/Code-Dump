import java.util.*;

class Solution {
    public int maximumDetonation(int[][] bombs) {
        int n = bombs.length;
        List<Integer>[] adj = new ArrayList[n];
        for (int i = 0; i < n; i++) adj[i] = new ArrayList<>();

        // build directed graph: edge i -> j if bomb i can detonate bomb j
        for (int i = 0; i < n; i++) {
            long xi = bombs[i][0], yi = bombs[i][1], ri = bombs[i][2];
            long r2 = ri * ri;
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                long xj = bombs[j][0], yj = bombs[j][1];
                long dx = xi - xj, dy = yi - yj;
                if (dx * dx + dy * dy <= r2) {
                    adj[i].add(j);
                }
            }
        }

        // for each bomb, BFS/DFS to count how many bombs can be detonated starting from it
        int maxDetonated = 0;
        for (int i = 0; i < n; i++) {
            boolean[] seen = new boolean[n];
            Queue<Integer> q = new ArrayDeque<>();
            q.add(i);
            seen[i] = true;
            int count = 0;
            while (!q.isEmpty()) {
                int cur = q.poll();
                count++;
                for (int nei : adj[cur]) {
                    if (!seen[nei]) {
                        seen[nei] = true;
                        q.add(nei);
                    }
                }
            }
            maxDetonated = Math.max(maxDetonated, count);
            // early exit optimization
            if (maxDetonated == n) break;
        }

        return maxDetonated;
    }
}