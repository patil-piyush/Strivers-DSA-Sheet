// Last updated: 8/7/2026, 7:15:13 PM
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
    void summ(TreeNode* root, int targetSum, vector<int>& res){
        if(root == NULL) return;
        res.push_back(root->val);
        if(root->right == NULL && root->left == NULL){
            if(targetSum-root->val == 0){
                result.push_back(res);
            }
        }
        else{
            summ(root->right, targetSum-root->val, res);
            summ(root->left, targetSum-root->val, res);
        }
        res.pop_back();
        return;
    }
    
    vector<vector<int>> result;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        result.clear();
        vector<int> res;
        summ(root, targetSum, res);
        return result;
    }
};