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
    int sol;
    int ans;
    void recur(TreeNode* root){
        if(root==NULL){
            return;
        }
        recur(root->left);
        sol--;
        if(sol==0){
            ans = root->val;
            return root->val;
        }
        recur(root->right);
        return;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        sol = k;
        recur(root);
        return ans;

        

    }
};
