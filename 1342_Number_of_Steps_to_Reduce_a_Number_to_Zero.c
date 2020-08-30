int numberOfSteps (int num){
    if(num == 0) return 0;
    int count = 0;
    while(num!=0){
        count++;
        if(num%2 == 0){
            num = num/2;
        }else{
            num -= 1;
        }
    }
    return count;
}
