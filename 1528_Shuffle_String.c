char * restoreString(char * s, int* indices, int indicesSize){
    char *shuffleStr = (char*)malloc(sizeof(char)*(indicesSize+1));
    int k =0;
    for(int i = 0;i<indicesSize;i++){
        shuffleStr[indices[i]] = s[i];  
		//shuffleStr[i] = s[indices[i]]; try example get wrong answer. 邏輯錯誤
        k++;
    }
    shuffleStr[k] = 0;
    return shuffleStr;
}
