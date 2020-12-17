#include <stdio.h>

int main()
  { int n=0,flag=0,ans;
    char c=getchar(); 

    if(c=='+')
      { ans=1; 
        while(flag!=1 && c!=';') 
           { scanf("%d", &n); c=getchar(); 
             if(c==EOF||n>9){flag=1;} 
             else if(c=='*'){ans*=n;} 
             else if(c==';'){ans*=n;break;} 
             else if(c=='+') 
               { int aux=n; 
                 while(flag!=1 && c!=';')  
                    { scanf("%d", &n); c=getchar();
                      aux+=n;
                      if(c==EOF){flag=1;} 
                      else if(c=='*'){ans*=aux;break;} 
                      else if(c==';'){ans*=aux;break;} 
                      else if(c!='+'){flag=1;} } } } } 
    if(c=='*')
      { ans=0; 
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
      
    
      
    
    

