class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;

        int unique = root->val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* currentNode = q.front();
            q.pop();

            if(currentNode->val!=unique) return false;
            if(currentNode->left!=NULL) q.push(currentNode->left);
            if(currentNode->right!=NULL) q.push(currentNode->right);
        }
        return true;
    }
};