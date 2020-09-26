/*
12345

12345
12xxx

x23xx
xx34x
xxx45

123xx
x234x
xx345

1234x
x2345

12345

all  58985
odd  34543 (x + 1) / 2
even 24442  x / 2
*/


int sumOddLengthSubarrays(int* arr, int arrSize){
    int sum = 0;
    for(int i = 0;i<arrSize;++i){
        sum +=  ((i + 1) * (arrSize - i) + 1) / 2 * arr[i];
    }
    
    return sum;
}
