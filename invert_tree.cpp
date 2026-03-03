#include <iostream> 
#include <queue> 

TreeNode* invertTree(TreeNode* root) {
    std::queue<TreeNode*> q;  
    q.push(root); 

    TreeNode *inverted = root; 
    while (!q.empty()) {
        TreeNode *node = q.front(); 
        q.pop(); 

        swap(node->right, node->left); 

        if (node->right) 
            q.push(node->right); 
        if (node->left) 
            q.push(node->left); 
    } 

    return inverted; 
} 
