

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmpfunc(const void * a, const void * b) { 
    //const void * a這是定義了一個指標a，a可以指向任意型別的值，但它指向的值必須是常量。在這種情況下，我們不能修改被指向的物件，但可以使指標指向其他物件。
    int av = *(int*)a; // 取得強制轉換後的指標內的植
    int bv = *(int*)b;
    
    int cmp = __builtin_popcount(av) - __builtin_popcount(bv);
    // 取得為1的bit 數
    if(cmp == 0) {
        return av - bv;
    }    
    
    return cmp;
}

int* sortByBits(int* arr, int arrSize, int* returnSize) {    
    qsort(arr, arrSize, sizeof(int), cmpfunc);    
    
    *returnSize = arrSize;    
    return arr;
}
