/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int *retArr = malloc(sizeof(int)*(*returnSize));
    for(int i = 0;i<numsSize;i+=2){
        retArr[i] = nums[i/2];
        retArr[i+1] = nums[i/2+n];
    }
    return retArr;
}
