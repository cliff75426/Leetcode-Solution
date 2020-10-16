

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize){
    int *ret = malloc(sizeof(int)*n);
    *returnSize = n;
    if(n%2==1){
        ret[0] = 0;
        for(int i = 1; i< *returnSize; i++){
            ret[i] = i;
            ret[++i] = (0-(i-1)); //先i=i+1  再ret[i] 並計算等號 右邊
            //ret[i++] = (0-(i-1)); 先ret[i] 再i=i+1  並計算等號 右邊
        }
    }else{
        for(int i = 0; i< *returnSize; i++){
            ret[i] = i+1;
            ret[++i] = (0-(i));
        }
    }
    
    return ret;
}
