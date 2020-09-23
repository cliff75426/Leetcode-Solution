
bool detectPrime(int num){
    bool flag = true;
    for(int i=2; i<=num/2; i++){
        if(num%i == 0){
            flag = false;
            break;
        }
    }
    
    return flag;
}

int countPrimeSetBits(int L, int R){
    int count = 0, bitcount = 0;
    
    for(int i=L; i<=R; i++){
        bitcount = __builtin_popcount(i);
        
        if(detectPrime(bitcount)  == true  && bitcount != 1){
            //printf("%d\n",bitcount);
            count++;
        }
        
    }
    
    return count;
}
