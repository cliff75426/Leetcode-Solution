int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    int matrix[n][m] ,odd = 0;
    
     for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){
            matrix[x][y] = 0;
        }
    }
    for(int i = 0;i < indicesSize;i++){
        for(int x=0;x < n;x++){
            matrix[x][indices[i][1]]++;
            if(indices[i][0] == x){
                for(int y=0;y<m;y++){
                    matrix[x][y]++;
                }
            }
        }
    }
    
    for(int x=0;x<n;x++){
        for(int y=0;y<m;y++){\
            printf("%d ",matrix[x][y]);
            if(matrix[x][y]%2==1){
                
                odd++;
            }
            printf("\n");
        }
    }
    
    return odd;   
}
