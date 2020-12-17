#include <stdio.h>

int main()
  { int n=0,flag=0,ans; //'flag' keeps track of violation of rules.
    char c=getchar(); //checking which precedence order to follow.
    
    if(c=='+')
      { ans=1; // '1' is identity of multiplication.
        while(flag!=1 && c!=';') 
           { scanf("%d", &n); c=getchar(); //scanning the operand and the next operator
             if(c==EOF||n>9){flag=1;} //We check if we end without ';' or if n>9
             else if(c=='*'){ans*=n;} //We multiply all numbers until we get a '+' or ';'
             else if(c==';'){ans*=n;break;} //We end on reaching ';'
             else if(c=='+') //On reaching '+'
               { int aux=n; //aux keeps track of the successive sum of nos.
                 while(flag!=1 && c!=';')  //we add all the nos. until we get '*'
                    { scanf("%d", &n); c=getchar();
                      aux+=n;
                      if(c==EOF){flag=1;} //If we reach EOF, then there was no ';' at end
                      else if(c=='*'){ans*=aux;break;} //On reaching '*' we update 'ans'
                      else if(c==';'){ans*=aux;break;} //On reaching ';' we update 'ans' 
                      else if(c!='+'){flag=1;} } } } } 
    
    // Exchange '+' and '*' everywhere. Change initialization for 'ans'
    if(c=='*')
      { ans=0; //0 is identity of addition
        while(flag!=1 && c!=';')
           { scanf("%d", &n); c=getchar();
             if(c==EOF||n>9){flag=1;}
             if(c=='+'){ans+=n;}
             else if(c==';'){ans+=n;break;}   
             else if(c=='*')
              { int aux=n;
                 while(flag!=1 && c!=';')
                    { scanf("%d", &n); c=getchar();
                      aux*=n;
                      if(c==EOF){flag=1;}
                      else if(c=='+'){ans+=aux;break;}
                      else if(c==';'){ans+=aux;break;}
                      else if(c!='*'){flag=1;} } } } }
                 
      if(flag==1){printf("-1");}
      else{printf("%d",ans);}
      
      return 0; }
      
    
      
    
    

