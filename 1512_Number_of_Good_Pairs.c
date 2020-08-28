
int compare(const void *a, const void *b){
    int c = *(int *)a;
    int d = *(int *)b;
    if(c<d){return -1;}
    else if (c==d){return 0;}
    else return 1;
}

int C_2(int n){
    int c2=1;
    for(int i = n;i>n-2;i--){
        c2 = c2 * i;
    }
    printf("%d\n",c2);
    if(n <= 1) return 0;
    else return c2/2;
}

int numIdenticalPairs(int* nums, int numsSize){
    qsort((void*)nums,numsSize,sizeof(int),compare);
    int count, temp, sumPairs;
    count = 0;
    temp = nums[0];
    sumPairs=0;
    
    for(int i = 0;i<numsSize;i++){
        
        if(temp != nums[i]){
            sumPairs = sumPairs + C_2(count);
            temp = nums[i];
            count = 1;
        }else {
            count++;
        }
        //printf("%d %d\n",nums[i],count);
    }
    sumPairs += C_2(count);
    return sumPairs;
}
