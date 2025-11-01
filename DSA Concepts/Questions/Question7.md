## Problem Statement
Given an unsorted array Arr of size N of positive integers. One number `'A'` from set `{1, 2,....,N}` is `missing` and one number 'B' occurs `twice` in array. Find these two numbers.

## Code
```
class Solve {
    int[] findTwoElement(int arr[], int n) {
        int ans[] = new int[2];
        int xor = 0;
        for(int i = 1;i<=n;i++){
            xor ^= i;
        }
        for(int i = 0;i<n;i++){
            xor ^= arr[i];
        }
        int count = 0;
        while((xor & 1) == 0){
            xor = xor >> 1;
            count++;
        }
        int mask = 1 << count;
        int x = 0;
        int y = 0;
        for(int i = 0;i<n;i++){
            if((mask & arr[i]) == 0){
                x ^= arr[i];
            }else{
                y ^= arr[i];
            }
        }
        for(int i = 1;i<=n;i++){
            if((mask & i) == 0){
                x ^= i;
            }else{
                y ^= i;
            }
        }
        ans[0] = y;
        ans[1] = x;
        
        for(int i = 0;i<n;i++){
            if(x == arr[i]){
                ans[0] = x;
                ans[1] = y;
            }
        }
        return ans;
        
    }
}
```