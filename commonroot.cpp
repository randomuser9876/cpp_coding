vector<TreeNode*> v1;
        vector<TreeNode*> v2;
        inorder(root,v1,p);
        inorder(root,v2,q);
        while(v1.size()!=0 && v2.size()!=0 ){
            if(v1.back()==v2.back()) return v1.back();
            v1.pop_back();
            v2.pop_back();
        }
        return v1.back();
    }
    void inorder(TreeNode* root,vector<TreeNode*> v, TreeNode* r){
        vector<TreeNode*> treeStack;
        treeStack.push_back(root);
        while(treeStack.empty()==false){
            while(treeStack.back()==NULL){
                treeStack.pop_back();
                v.pop_back();
            }
            struct TreeNode* newnode = treeStack.back();
            v.push_back(newnode);
            if(v.back()==r) return;
            treeStack.pop_back();
            treeStack.push_back(newnode->right);
            treeStack.push_back(newnode->left);
        }

