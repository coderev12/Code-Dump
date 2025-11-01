import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		SegmentTree segmentTree = new SegmentTree(10);	
		int[] arr = {1, 3, -2, 8, -7, 4, 10, 12, -5, 6};
		segmentTree.build(arr, 0, 0, arr.length - 1);	
		System.out.println("Minimum value in range [2, 5]: " + segmentTree.query(0, 0, arr.length - 1, 2, 5));
		segmentTree.update(0, 0, arr.length - 1, 3, -10);
		System.out.println("Minimum value in range [2, 5] after update: "	 + segmentTree.query(0, 0, arr.length - 1, 2, 5));		
		sc.close();
	}
}

public static class SegmentTree {
	int[] tree;
	int n;

	public SegmentTree(int size) {
		n = size;
		tree = new int[4 * n];
	}

	public void build(int[] arr, int node, int start, int end) {
		if (start == end) {
			tree[node] = arr[start];
			return;
		}

		int mid = (start + end) / 2;
		build(arr, 2 * node + 1, start, mid);
		build(arr, 2 * node + 2, mid + 1, end);
		tree[node] = Math.min(tree[2 * node + 1], tree[2 * node + 2]);
		return;
	}

	public void update(int node, int start, int end, int idx, int val) {
		if (start == end) {
			tree[node] = val;
		} else {
			int mid = (start + end) / 2;
			if (start <= idx && idx <= mid) {
				update(2 * node + 1, start, mid, idx, val);
			} else {
				update(2 * node + 2, mid + 1, end, idx, val);
			}
			tree[node] = Math.min(tree[2 * node + 1], tree[2 * node + 2]);
		}
	}

	public int query(int node, int start, int end, int l, int r) {
		if (r < start || end < l) {
			return Integer.MAX_VALUE;
		}
		if (l <= start && end <= r) {
			return tree[node];
		}
		int mid = (start + end) / 2;
		int p1 = query(2 * node + 1, start, mid, l, r);
		int p2 = query(2 * node + 2, mid + 1, end, l, r);
		return Math.min(p1, p2);
	}
}