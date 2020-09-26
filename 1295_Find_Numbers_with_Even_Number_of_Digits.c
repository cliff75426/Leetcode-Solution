int findNumbers(int* nums, int numsSize){
    int evencount = 0, n, digitsCount = 0;
    
    for(int i = 0; i<numsSize;i++){
        n = nums[i];
        while(n!=0){
            n = n/10;
            digitsCount++;
        }
        
        if(digitsCount%2==0){
           evencount++; 
        }
        printf("%d\n",digitsCount);
        digitsCount=0;
    }
    return evencount;
}
