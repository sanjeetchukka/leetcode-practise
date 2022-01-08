

int romanToInt(char * s){

               char ch;
               int val,i,len,temp,sum=0;
        len=strlen(s);
        for(i=0;i<len;i++)
        {ch=s[i];
           switch(ch)
           {case 'I':   val=1;break;
            case 'V':   val=5;break;
            case 'X':   val=10;break;
            case 'L':   val=50;break;
            case 'C':   val=100;break;
            case 'D':   val=500;break;
            case 'M' :  val=1000;break;
                default:    printf("wrong input");
            return 1;}
           
         if(i+1<len)
         {if(s[i]=='I'  &&  s[i+1]=='V'){val=4;i++;} 
          if(s[i]=='I'  &&  s[i+1]=='X'){val=9;i++;}
          if(s[i]=='X'  &&  s[i+1]=='L'){val=40;i++;}
          if(s[i]=='X'  &&  s[i+1]=='C'){val=90;i++;}
          if(s[i]=='C'  &&  s[i+1]=='D'){val=400;i++;}
          if(s[i]=='C'  &&  s[i+1]=='M'){val=900;i++;}
            if(s[i]==s[i+1])
                {temp=2*val;i++;
                if(i+1<len && ch==s[i+1])
                {temp=3*val;i++;}
                val=temp;
            
             }
         }
        sum=sum+val;
         }
        return(sum);
    }


