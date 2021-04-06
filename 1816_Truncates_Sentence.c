char * truncateSentence(char * s, int k){
   
    int count = 0,rlen=0;
    for(int i = 0;i<strlen(s);i++){
        if((int)s[i] == 32){
            count++;
        }
        if(count == k){
            rlen = i+1;
            break;
        }
        rlen = i+2;
    }
    char * truncateS = malloc((rlen+1) * sizeof(char));
    memset(truncateS,'\0',rlen+1);
    strncpy(truncateS,s,rlen-1);
    printf("%c",truncateS[0]);
    return truncateS;
}
