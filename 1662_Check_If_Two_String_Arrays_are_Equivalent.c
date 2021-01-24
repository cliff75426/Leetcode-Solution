bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size)
{
    int word1Count = 0;
    int ii = 0;
    int word2Count = 0;
    int jj = 0;
    
    while( word1Count < word1Size && word2Count < word2Size )
    {
        if( word1[word1Count][ii] != word2[word2Count][jj] )
            return false;
            
        // Goto the next character
        ii++;
        if ( word1[word1Count][ii] == '\0' )
        {
            word1Count++;
            ii = 0;
        }
        
        jj++;
        if ( word2[word2Count][jj] == '\0' )
        {
            word2Count++;
            jj = 0;
        }
    }
    
    if(word1Count == word1Size && word2Count == word2Size)
        return true;
    else
        return false;
}
