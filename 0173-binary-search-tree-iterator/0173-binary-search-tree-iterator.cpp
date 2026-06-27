class BSTIterator {
public:
    stack<TreeNode*> st;

    void putintostack(TreeNode* root) {
        while (root != nullptr) {
            st.push(root);
            root = root->left;
        }
    }

    BSTIterator(TreeNode* root) {
        putintostack(root);
    }

    int next() {
        TreeNode* curr = st.top();
        st.pop();

        putintostack(curr->right);

        return curr->val;
    }

    bool hasNext() {
        return !st.empty();
    }
};