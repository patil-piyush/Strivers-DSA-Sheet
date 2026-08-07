// Last updated: 8/7/2026, 7:15:43 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    // vector<int> inorderTraversal(TreeNode* root) {
    //     if(!root) return {};
    //     inorderTraversal(root->left);
    //     res.push_back(root->val);
    //     inorderTraversal(root->right);
    //     return res;
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root)
            return {};
        stack<TreeNode*> st;
        TreeNode* nn = root;
        while (true) {
            if (nn != NULL) {
                st.push(nn);
                nn = nn->left;
            } else {
                if(st.empty()) break;
                nn = st.top();
                st.pop();
                res.push_back(nn->val);
                nn=nn->right;
            }
        }
        return res;
    }
};