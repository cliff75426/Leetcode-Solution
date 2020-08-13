/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *retArr = malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<numsSize-1;i++){
        //if((nums[i]<=target&&target>=0)||(nums[i]>=target&&target<0)){
            for(int j = i+1;j<numsSize;j++){
                if(target==nums[i]+nums[j]){
                    retArr[0]=i;
                    retArr[1]=j;
                    
                }
            }
        //}
    }
    return retArr;
}

/**
* Burst Solution
**/
