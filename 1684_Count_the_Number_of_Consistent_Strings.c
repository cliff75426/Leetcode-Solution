int cmpfunc (const void * a,const void *b){
    return (*(char*)a - *(char*)b);
}




int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int dis_num = 0;
    bool flag = false;
    size_t allowed_size = strlen(allowed);
    qsort(allowed,allowed_size,sizeof(char),cmpfunc);
    
    for( int i = 0; i < wordsSize ; i++){
        qsort(words[i],strlen(words[i]),sizeof(char),cmpfunc);
        for(int j = 0; j < strlen(words[i]);j++){
            printf("%c ",words[i][j]);
            flag = false;
            for(int z = 0; z < allowed_size;z++){
                if(words[i][j] == allowed[z]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                dis_num++;
                break;
            }
        }
        printf("\n");
    }
    
    dis_num = wordsSize - dis_num;
    
    return dis_num;
}
