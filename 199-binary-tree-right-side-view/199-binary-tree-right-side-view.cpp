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
    vector<int> rightSideView(TreeNode* root) {
        
        
        int max_level =-1, curr_level = 0;
        vector<int> ans;
        
        right(root, ans, max_level, curr_level);
        return ans;
        
        
    }
    
    void right(TreeNode* root, vector<int>& ans, int& max_level, int curr_level){
        
        if(!root) return;
        
        if(curr_level > max_level){
            max_level = curr_level;
            ans.push_back(root->val);
        }
        
        right(root->right, ans, max_level, curr_level+1);
        right(root->left, ans, max_level, curr_level+1);
        
    }
};