/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        int count=0;
        if(!root) return count;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            queue<TreeNode*> q2;
            q2.push(temp);
            int v=0,sum=0;
            while(!q2.empty()){
                TreeNode* t=q2.front();
                q2.pop();
                sum+=t->val;
                if(t->left){
                    q2.push(t->left);
                }
                if(t->right){
                    q2.push(t->right);
                }
                v++;
            }
            int avg=sum/v;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            if(avg==temp->val){
                count++;
            }
        }
        return count;
    }
};