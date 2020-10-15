char * removeOuterParentheses(char * S){
    char *rel = malloc(sizeof(char)*strlen(S));
    int j = 0, first = 0;
    
    for(int i = 0;i<strlen(S);i++){
        if(S[i] == '(' && first == 0){
            first++;
        }else if(S[i] == '(' && first > 0){
            rel[j] = S[i];
            j++;
            first++;
        }else if(S[i] == ')' && first == 1){
            first--;
        }else{
            rel[j] = S[i];
            j++;
            first--;
        }
            
    }
    rel[j] = 0; //end of line
    return rel;
 
}
