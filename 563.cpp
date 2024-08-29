class Solution {
public:
    int tilt=0;
    int sum(TreeNode* root) {
        if(!root) return 0;
        int l = sum(root->left);
        int r = sum(root->right);

        tilt += abs(l-r);
        return root->val+l+r;
    }
    int findTilt(TreeNode* root) {
        sum(root);
        return tilt;
    }
};