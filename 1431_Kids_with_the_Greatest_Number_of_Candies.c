/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){

    int temp, maxCandies = candies[0];
    bool *retArr;
    *returnSize = candiesSize;
    retArr = malloc( *returnSize * sizeof(bool) );
    for(int i = 0; i < candiesSize; i++){
        if(maxCandies < candies[i]){
            maxCandies = candies[i];
        }
    }
    
    for(int i = 0; i < candiesSize; i++){
        temp = maxCandies - candies[i];
        if(temp <= extraCandies){
            retArr[i] = true;
        }else{
            retArr[i] = false;
        }
    }
    
    return retArr;
    
}
