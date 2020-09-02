/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    int freSum = 0, fre=0;
    for(int i=0;i<numsSize;i+=2){
        
        freSum += nums[i];
    }
    int *reArr = (int*)malloc(sizeof(int)*(freSum));
    memset(reArr,0,freSum);
    *returnSize = freSum;
    for(int i = 0;i<numsSize;i++){
        if(i%2==0) {
            for(int j=0;j<nums[i];j++){
                reArr[fre++] = nums[i+1];
            }
        }        
    }
    return reArr;
}
