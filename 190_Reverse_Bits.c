uint32_t reverseBits(uint32_t n) {
    uint32_t revN = 0;
    for(int i=0;i<32;i++){
        if(n%2==1){
            n = n >> 1;
            revN = revN << 1;
            revN += 1;
            
        }else{
            n = n >> 1;
            revN = revN << 1;
        }
    }
    return revN;
}
