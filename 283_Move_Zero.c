void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void moveZeroes(int* nums, int numsSize){
	int temp;
	int countZero = 0;
	for(int i=numsSize-1;i>=0;i--){
		if(nums[i] == 0){
			countZero ++;
			//printf("BB ");
			for(int j = i;j<numsSize-countZero;j++){
				//printf("%d,%d",nums[j],nums[j+1]);
				swap(&nums[j],&nums[j+1]);
				//printf("AA ");
			}
			i = numsSize-countZero;
		}
	}

}
