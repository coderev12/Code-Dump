## Problem Statement

You are given an integer matrix `isWater` of size `m x n` that represents a map of land and water cells.

- If `isWater[i][j] == 0`, cell `(i, j)` is a land cell.
- If `isWater[i][j] == 1`, cell `(i, j)` is a water cell.

You must assign each cell a height in a way that follows these rules:

- The height of each cell must be non-negative.
- If the cell is a water cell, its height must be 0.
- Any two adjacent cells must have an absolute height difference of at most 1. A cell is adjacent to another cell if the former is directly north, east, south, or west of the latter (i.e., their sides are touching).

Find an assignment of heights such that the maximum height in the matrix is maximized.

Return an integer matrix `height` of size `m x n` where `height[i][j]` is cell `(i, j)'s` height. If there are multiple solutions, return any of them.



## Code
```
class Solution {
    public int[][] highestPeak(int[][] isWater) {
        int n = isWater.length;
        int m = isWater[0].length;
        int[][] matrix = new int[n][m];
        for(int[] a: matrix){
            Arrays.fill(a,Integer.MAX_VALUE);
        }
        Queue<Pair> q = new LinkedList<>();
        for(int i = 0;i<n;i++){
            for(int j = 0;j< m;j++){
                if(isWater[i][j] == 1){
                    q.add(new Pair(i,j));
                    matrix[i][j] = 0;
                }
            }
        }
        while(!q.isEmpty()){
            Pair curr = q.poll();
            int[] d1 = {1,0,-1,0};
            int[] d2 = {0,1,0,-1};
            for(int i = 0;i<4;i++){
                int x = curr.first + d1[i];
                int y = curr.second + d2[i];
                if(x >= 0 && y >= 0 && x < n && y < m && matrix[x][y] > 1 + matrix[curr.first][curr.second]){
                    matrix[x][y] = 1 + matrix[curr.first][curr.second];
                    q.add(new Pair(x,y));
                }

            }
            
        }
        return matrix;
    }

    static class Pair{
        int first, second;
        Pair(int x, int y){
            first = x;
            second = y;
        }
    }
}
```