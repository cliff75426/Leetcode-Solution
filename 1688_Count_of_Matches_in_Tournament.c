
int numberOfMatches(int n){
    int total_Match = 0,match = n;
        while(n != 1 || match != 1){
            if(n%2 == 1){
                match = (n-1)/2;
                n = (n-1)/2 + 1;
            }else{
                match = n/2;
                n = match;
            }
            total_Match += match;
        }
    return total_Match;
}
