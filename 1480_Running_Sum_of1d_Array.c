/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *reArr = malloc(sizeof(int)*numsSize);
    int sum = 0;
    for(int i = 0;i<numsSize;i++){
        sum += nums[i];
        reArr[i] = sum;
        printf("%d\n",reArr[i]);
    }
    *returnSize = numsSize;
    return reArr;
}
