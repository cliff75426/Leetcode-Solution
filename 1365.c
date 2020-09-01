/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//Brute force for each array element.
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int *resArr = (int*)malloc(sizeof(int)*(numsSize));
    *returnSize = numsSize;
    memset(resArr,0,*returnSize);
    int small_count = 0;
    for(int i=0;i<numsSize;i++){
        printf("%d ",resArr[i]);
        for(int j=0;j<numsSize;j++){
            if(nums[i]>nums[j]){
                small_count++;
            }
        }
        resArr[i] = small_count;
        small_count = 0;
    }
    return resArr;
}
