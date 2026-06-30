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
class Solution
{
public:
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        if (root == nullptr)
            return {};
        queue<TreeNode *> q;
        q.push(root);
        vector<int> temp;
        res.push_back({root->val});
        while (!q.empty())
        {
            temp.clear();
            int n = q.size();
            while (n--)
            {
                TreeNode *nn = q.front();
                q.pop();
                if (nn->left)
                {
                    q.push(nn->left);
                    temp.push_back(nn->left->val);
                }
                if (nn->right)
                {
                    q.push(nn->right);
                    temp.push_back(nn->right->val);
                }
            }
            if (temp.size() > 0)
                res.push_back(temp);
        }
        return res;
    }
};