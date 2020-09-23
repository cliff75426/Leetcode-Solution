bool hasAlternatingBits(int n){
    int prev = 0; //record prev last bit
    int rMod = 0;
    prev = n%2;
    while(n != 0){
        n = n >> 1;
        rMod = n%2;
        if(prev == rMod){
            return false;
        }else{
            prev = rMod;
        }
    }
    return true;
}
