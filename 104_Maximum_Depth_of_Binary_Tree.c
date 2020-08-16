/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

//Recursion

int max(int a,int b){
    if(a<b) return b;
    else return a;
}

int maxDepth(struct TreeNode* root){
    
    if(root == NULL) return 0;
    
    if(root->left != NULL || root->right != NULL){
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);

    }
    
    return 1;
}
