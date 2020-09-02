
int subtractProductAndSum(int n){
    int product = 1, reminder, sum = 0,rel;
    while(n/10 != 0){
        reminder = n%10;
        product *= reminder;
        sum +=reminder;
        n/=10;
    }
    reminder = n%10;
    product*=(n%10);
    sum += reminder;
    rel = product-sum;
    return rel;
}
