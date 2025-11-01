## Problem Statement

For a stream of integers, implement a data structure that checks if the last `k` integers parsed in the stream are equal to `value`.

### Implement the DataStream class:

- `DataStream(int value, int k)`: Initializes the object with an empty integer stream and the two integers `value` and `k`.
- `boolean consec(int num)`: Adds `num` to the stream of integers. Returns `true` if the last `k` integers are equal to `value`, and `false` otherwise. If there are less than `k` integers, the condition does not hold true, so returns `false`.

## Code
```
class DataStream {
    int value, k, count;
    public DataStream(int value, int k) {
        this.value = value;
        this.k = k;
        count = 0;
    }
    public boolean consec(int num) {
        if(num == value){
            count++;
        }else{
            count = 0;
        }
        if(count >= k) return true;
        return false;
    }
}

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream obj = new DataStream(value, k);
 * boolean param_1 = obj.consec(num);
 */
```