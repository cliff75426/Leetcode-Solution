int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int maxMoney = 0, total=0;
    for(int i = 0; i < accountsSize; i++){
        for(int j = 0; j < *accountsColSize; j++){
            total  += accounts[i][j];
        }
        if(maxMoney < total)
            maxMoney = total;
        total = 0;
    }
    return maxMoney;
}
