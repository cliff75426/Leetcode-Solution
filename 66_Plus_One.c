/**

- Note: The returned array must be malloced, assume caller calls free().
*/
int* plusOne(int* digits, int digitsSize, int* returnSize){

    *returnSize = 0;
    int *relArr = (int*)malloc(sizeof(int));
    int add = 0;
    for(int i=1;i<=digitsSize;i++){
    	if(i == 1){
    		digits[digitsSize-i] +=1;
    	}else{
    		digits[digitsSize-i] += add;
    	}
    	add = digits[digitsSize-i]/10;
    	digits[digitsSize-i] = digits[digitsSize-i]%10;

    }

    if(add>=1){
    	*returnSize = digitsSize+1;
    	relArr = realloc(relArr,sizeof(int)*(*returnSize));
    	relArr[0] = add;
    }else{
    	*returnSize = digitsSize;
    	return digits;
    }

    for(int i=1;i<=digitsSize;i++){
    	relArr[*returnSize-i] = digits[i-1];
    }

    return relArr;

}
