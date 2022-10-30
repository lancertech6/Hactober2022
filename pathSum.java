public class pathSum {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root != null)
            if (root.left == null && root.right == null && root.val == targetSum)
                return true;
            else {
                if (root.left != null)
                    if (hasPathSum(root.left, targetSum - root.val))
                        return true;
                if (root.right != null)
                    if (hasPathSum(root.right, targetSum - root.val))
                        return true;
                return false;
            }
        return false;

    }
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

}
