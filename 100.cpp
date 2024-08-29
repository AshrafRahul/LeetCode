class Solution {
public:
    bool a = true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        check(p, q);
        return a;
    }
    void check(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return;
        if(p==NULL || q==NULL) {
            a = false;
            return;
        }
        if(p->val != q->val) {
            a = false;
            return;
        }
        check(p->left, q->left);
        check(p->right, q->right);
    }
};