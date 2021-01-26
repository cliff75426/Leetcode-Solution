int largestAltitude(int* gain, int gainSize){
    int max=0,high=0;
    for(int i=0;i<gainSize;i++){
        high += gain[i];
        if(max<high)
            max = high;
    }
    
    return max;
}
