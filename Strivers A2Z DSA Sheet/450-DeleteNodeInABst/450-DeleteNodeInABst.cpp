// Last updated: 8/7/2026, 7:12:20 PM
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
    int Height(TreeNode* root) {
        if(root == NULL) return 0;
        int x = Height(root->left);
        int y = Height(root->right);
        if (x > y)
            return x + 1;
        return y + 1;
    }

    TreeNode* Pre(TreeNode* root) {
        while (root->right)
            root = root->right;
        return root;
    }

    TreeNode* Succ(TreeNode* root) {
        while (root->left)
            root = root->left;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            TreeNode* p = NULL;
            if(Height(root->left) > Height(root->right)){
                p = Pre(root->left);
                root->val = p->val;
                root->left = deleteNode(root->left, p->val);
            }
            else{
                p = Succ(root->right);
                root->val = p->val;
                root->right = deleteNode(root->right, p->val);
            }
        }
        return root;
    }
};