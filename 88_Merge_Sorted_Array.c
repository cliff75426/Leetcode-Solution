int compare(const void *a, const void *b)//這函式是 qsort 所需的比較函式
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}               //傳回 -1 代表 a < b
      else if (c == d) {return 0;}      //傳回   0 代表 a = b
      else return 1;                          //傳回  1 代表 a>b
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    for(int i = m; i<nums1Size; i++){
        nums1[i] = nums2[i-m];
    }
    qsort((void *)nums1, nums1Size, sizeof(nums1[0]), compare);

}
