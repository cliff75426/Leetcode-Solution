/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)//這函式是 qsort 所需的比較函式
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}               //傳回 -1 代表 a < b
      else if (c == d) {return 0;}         //傳回   0 代表 a = b
      else return 1;                          //傳回  1 代表 a>b
}

int* minSubsequence(int* nums, int numsSize, int* returnSize){
    qsort((void *)nums, numsSize, sizeof(nums[0]), compare);
    int i=0,j=numsSize-1;
    int iSum=nums[i],jSum=nums[j];
    while(i<j){
        if(iSum>=jSum){
            j--;
            jSum += nums[j];
        }else{
            i++;
            iSum +=nums[i];
        }
    }
    *returnSize = numsSize - j;
    int *retArr = malloc(sizeof(int)*(*returnSize));
    for(int i=0;i<*returnSize;i++){
        retArr[i] = nums[numsSize-1-i];
    }
    
    
    return retArr;
}
