/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int *retArr = (int*)malloc(sizeof(int)*numsSize);
    *returnSize = numsSize;
    memset(retArr,-1,sizeof(int)*numsSize);

    for(int i = 0;i<numsSize;i++){
            memmove( retArr + index[i] + 1, retArr + index[i], sizeof(int) * (numsSize - index[i] - 1));
            retArr[index[i]] = nums[i];
    }
    return retArr;
}
