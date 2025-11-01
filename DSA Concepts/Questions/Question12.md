## Problem Statement

Given a binary tree `root`, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).

Assume a BST is defined as follows:

- The left subtree of a node contains only nodes with keys less than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- Both the left and right subtrees must also be binary search trees.



## Code
```
class Solution {
    class TreeInfo {
        boolean isBST;
        TreeNode min;
        TreeNode max;
        int sum;
        int globalMax;
        
        public TreeInfo(boolean isBST, TreeNode min, TreeNode max, int sum, int globalMax) {
            this.isBST = isBST;
            this.min = min;
            this.max = max;
            this.sum = sum;
            this.globalMax = globalMax;
        }
    }
    
    public int maxSumBST(TreeNode root) {
        return helper(root).globalMax;
    }
    
    private TreeInfo helper(TreeNode root) {
        if (root == null) return new TreeInfo(true, null, null, 0, 0);
        if (root.left == null && root.right == null) {
            return new TreeInfo(true, root, root, root.val, Math.max(0, root.val));
        }
        TreeInfo left = helper(root.left);
        TreeInfo right = helper(root.right);

        if (!left.isBST
            || !right.isBST
            || root.left != null && root.val <= left.max.val 
            || root.right != null && root.val >= right.min.val) {
            return new TreeInfo(false, null, null, 0, Math.max(left.globalMax, right.globalMax));
        } 
        
        int curSum = left.sum + right.sum + root.val;
        TreeNode min = root.left == null ? root : left.min;
        TreeNode max = root.right == null ? root : right.max;
        return new TreeInfo(true, min, max, curSum, Math.max(curSum, Math.max(left.globalMax, right.globalMax)));
    }
}
```