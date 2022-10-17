class Solution {
public:
//   here we take a global pointer prev we first need to go visit right most node then its left and change its right to prev left to null and again prev to root and run recursively 
TreeNode * prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL)return;
   flatten(root->right);
   flatten(root->left);
   root->right=prev;
   root->left=NULL;

   prev=root;
        
    }
};
