

bool isPowerOfFour(int num){
    for(int i = 0;i<32;i++){
        if(i%2==0){
            if(num%2!=0){
                num = num >> 1;
                if(num == 0){
                    return true;
                }else{
                    return false;
                }
            }else{
                num = num >> 1;
            }
        }else{
            if(num%2==1){return false;}
            num = num >> 1;
        }
    }
    return false;
}
