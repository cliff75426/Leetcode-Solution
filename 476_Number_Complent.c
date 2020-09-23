
int findComplement(int num){
    int valComp = num,base;
    int count = 0;
    while(valComp!=0){
        count++;
        valComp = valComp>>1;
    }
       
    for(int i = 0 ;i<count;i++){
        //printf("%d\n",valComp);
        
        valComp = valComp + pow(2,i);//pow(base,exponent) 指數函數
    }
    
    valComp = num ^ valComp;
    
    return valComp;
    
}
