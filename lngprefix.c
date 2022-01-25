


char * longestCommonPrefix(char **strs, int strsSize){
     int flag=0;
   char ch;int l[20],i,j,lenght[strsSize],small=201;
    for(i=0;i<strsSize;i++)
        {lenght[i]=strlen(strs[i]);
        if(lenght[i]<small)
        small=lenght[i];}
        char *res;
        res=(char *)calloc(200,sizeof(char));
            for(i=0;i<small;i++)
                {  flag=0;
                ch=strs[0][i];
                for(j=1;j<strsSize;j++)
	            {if(ch== strs[j][i])
	             continue;
	            else
	                 {flag=1;
	                break;
	                }

                 }
                if(j==strsSize) res[i]=ch;
	            if(flag==1) break;
     
	
      }
            res[i]='\0';
            return res;
}

