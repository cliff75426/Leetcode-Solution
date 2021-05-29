
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int smallIdx(struct TreeNode* root, int *index, int k){
    int temp = 0;
    if(root == NULL){
        return -1;
    }
    if( -1 != (temp = smallIdx(root->left, index, k))){
        return temp;
    }
    if(*index == k){
        return  root->val;  
    }else{
        (*index)++;
    }
    if( -1 != (temp = smallIdx(root->right, index, k))){
        return temp;
    }
    
    return -1;
}


int kthSmallest(struct TreeNode* root, int k){
    int ret = 0;
    int index = 1;
    ret = smallIdx(root,&index,k);
    return ret;
    
    
    
}
