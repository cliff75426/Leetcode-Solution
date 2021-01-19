char * interpret(char * command){

    char *ret = malloc( (strlen(command)+1) *sizeof(char));
    int r=0;
    bool flag = false;

    for(int i = 0;i < strlen(command);i++){
        if(command[i] == 'G'){
            ret[r]= 'G';
            r++;
        }else if(command[i] == '('){
            flag = true;
        }else if(flag == true){
            if(command[i] == ')'){
                ret[r] = 'o';
                r++;
            }else{
                ret[r] = 'a';
                r++;
                ret[r] = 'l';
                r++;
            }
            flag = false;
        }
        printf("%d ",r);
    }
    //end of line
    ret[r] = '\0';
    return ret;
}
