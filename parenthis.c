

char stack[20];
int top=-1;
bool isValid(char * s){
 int i,l;
    void push(char);
    char pop();
    char x;
    l=strlen(s);
    if((l%2!=0)||(s[0]=='}')||(s[0]==']')||(s[0]==')')) 
    return false; 
        for(i=0;i<l;i++)
        {  
        if((s[i]=='[')||(s[i]=='{')||(s[i]=='('))
        push(s[i]);
        else{
        x=pop();
        switch(s[i])
        {case ')': if (x !='(')
                  return false;
                  break;
        case ']':  if (x !='[')
                  return false;
                  break;
        case '}': if (x !='{')
                  return false;
                  break;
        }  
        }
 }

if(top!=-1)  return false;
return true;
}
void push(char x)
{ top++;
  stack[top]=x;
    
}
char pop()
{ char x=stack[top];
  top--;
  return x; 
    }


