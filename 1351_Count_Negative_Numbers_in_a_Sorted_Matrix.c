

int countNegatives(int** grid, int gridSize, int* gridColSize){
    int count = 0, j;
    
    for(int i = 0;i<gridSize;i++){
        j=0;
        
        while((j<*gridColSize) && (grid[i][j]>=0)){
            j++;
        }
        printf("%d\n",j);
        if((j==*gridColSize-1 && grid[i][j]<0)||j<*gridColSize-1){
            count += (*gridColSize-j);
        }
    }
    return count;
}
