char * defangIPaddr(char * address){
    char *result = (char *)malloc(sizeof(char) * (strlen(address) + 8));
    int count = 0;
    for (int i = 0;address[i] != '\0';i++) {
        if (address[i]=='.') {
            result[count] = '[';    
            result[++count] = '.'; //count++; result[++count] = '.';
            result[++count] = ']'; //count++; result[++count] = ']';
            count++;
        }else {
            result[count++] = address[i];    //result[count] = address[i]; count++;
        }
    }
    result[count] = 0;   // ASCII 0 => '\0'
    return result;
}
