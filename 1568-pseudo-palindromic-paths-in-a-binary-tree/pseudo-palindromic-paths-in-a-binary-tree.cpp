class Solution {
public:
    int pseudoPalindromicPaths(TreeNode* root) {
        return dfs(root, 0);
    }

private:
    int dfs(TreeNode* root, int pathBits) {
        if (root == NULL) return 0;

        // Toggle the bit corresponding to the current digit.
        pathBits ^= (1 << root->val);

        if (root->left == NULL && root->right == NULL) {
            // Check if the path is pseudo-palindromic.
            return ((pathBits & (pathBits - 1)) == 0) ? 1 : 0;
        }

        int leftCount = dfs(root->left, pathBits);
        int rightCount = dfs(root->right, pathBits);

        return leftCount + rightCount;
    }
};