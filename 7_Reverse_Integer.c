int reverse(int x){

    int revRel = 0;
    int temp;

    while(x!=0){
        temp = x%10;
        if (revRel > INT_MAX/10 || (revRel == INT_MAX / 10 && temp > 7)) return 0;
        if (revRel < INT_MIN/10 || (revRel == INT_MIN / 10 && temp < -8)) return 0;
        revRel = revRel*10 +temp;
        temp = 0;
        x/=10;
    }

    return revRel;
}
