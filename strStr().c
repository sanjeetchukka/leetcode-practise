

int strStr(char * haystack, char * needle){
    int haystackLen=strlen(haystack);
    int needleLen=strlen(needle);
    if(needleLen==0){return 0;}
    if(haystackLen==0){return -1;}
    int j=0;
    for(int i=0;i<haystackLen;i++)
    {
        if(haystack[i]==needle[0])
        {
            for(j=1;j<needleLen;j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==needleLen)
                return i;        
        }
        
    }
    return -1;
}

