int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum = 0;
    bool odd = true;
    if(matSize%2 == 0) odd = false;
    
    for(int i; i<matSize; i++){
        if(odd == true && i == matSize/2){
            printf("%d\n",mat[i][i]);
            sum += mat[i][i];
        }else{
            printf("%d %d\n",mat[i][i],mat[matSize-i-1][i]);
            sum = sum + mat[i][i] + mat[matSize-i-1][i];
        }
    }
    
    
    return sum;
}
