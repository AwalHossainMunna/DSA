
//  Question: https://leetcode.com/problems/binary-tree-inorder-traversal/  //


class Solution {
    public:

    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> ans;
      inorderTraversalHelper(ans, root);
      return ans;
    }

    void inorderTraversalHelper(vector<int> &ans, TreeNode* root){
    TreeNode* temp = root;

    if(temp == NULL){
        return;
    }

    inorderTraversalHelper(ans,temp->left);
    int data = temp->val;
    ans.push_back(data);
    inorderTraversalHelper(ans,temp->right);
   } 
};
