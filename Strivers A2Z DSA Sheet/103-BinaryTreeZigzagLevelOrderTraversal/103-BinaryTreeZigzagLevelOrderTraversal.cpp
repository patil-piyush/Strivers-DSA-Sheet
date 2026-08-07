// Last updated: 8/7/2026, 7:15:30 PM
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
    vector<vector<int>> res;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return res;
        vector<int> temp;
        int n;
        bool leftToright = true;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        while(!st1.empty()){
            temp.clear();
            n = st1.size();
            while(n--){
                root = st1.top();
                st1.pop();
                temp.push_back(root->val);
                if(leftToright){
                    if(root->left) st2.push(root->left);
                    if(root->right) st2.push(root->right);
                }
                else{
                    if(root->right) st2.push(root->right);
                    if(root->left) st2.push(root->left);
                }
            }
            swap(st1,st2);
            leftToright = !leftToright;
            res.push_back(temp);
        }
        return res;
    }
};