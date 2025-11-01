import java.util.*;

class Solution {
    public int maximumDetonation(int[][] bombs) {
        int maxBombDetonation = 0;
        for(int i = 0;i<bombs.length;i++){
            int curr = 1;
            int ix = bombs[i][0];
            int iy = bombs[i][1];
            int ir = bombs[i][2];
            
            int xRange1ForI = ix -ir;
            int xRange2ForI = ix + ir;
            int yRange1ForI = iy -ir;
            int yRange1ForI = iy + ir;
            
            
        }
    }
}