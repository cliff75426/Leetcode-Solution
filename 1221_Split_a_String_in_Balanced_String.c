int balancedStringSplit(char * s){
    int count_pair=0;
    int LRcount = 0;
    
    for(int i =0; i<strlen(s);i++){
        if(s[i]=='R'){
            LRcount++;
        }else if(s[i]=='L'){
            LRcount--;
        }
        if(LRcount == 0){
            count_pair++;
        }
    }
    return count_pair;
}
