

bool isOneBitCharacter(int* bits, int bitsSize){
    bool flag_end,flag;
    
    for(int i=0; i<bitsSize; i++){
        if(i == 0){
            if(bits[i]==1){ 
                flag = false;
                flag_end = false;
            }else{
                flag = true;
                flag_end = true;
            }
        }else if(bits[i]==1){ //1
            if(flag_end == false){
                flag = false;
                flag_end = true;
            }else if(flag_end == true){
                flag = true;
                flag_end = false;
            }
        }else if(bits[i]==0){
            if(flag_end == false){
                flag = false;
                flag_end = true;
            }else if(flag_end == true){
                flag = true;
            }
        }
        
    }
    
    return flag;
}
