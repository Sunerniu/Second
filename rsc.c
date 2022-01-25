#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024



int main()
{
 char rule[MAX_LINE];  
 FILE *fp;            
 int len;             
fp = fopen("text.txt","r");
 while(fgets(rule,MAX_LINE,fp) != NULL)
 {  int u=0;
    int i=1;
    int flag=0;
    char rule1[20]={0};
    char rule2[20]={0}; 
    char dk[10]={0};
    int ra1=0,ra2=0,ra3=0,ra4=0;   
    for(i;rule[i]!='/';i++)
    {
        rule1[i-1]=rule[i];
    }
    for(i;rule[i]!='	';i++){

    }
    for(i;rule[i]=='	';i++){
        
    }
    for(i;rule[i]!='/';i++)
    {   
        rule2[u]=rule[i];
        u++;
       
    }
    for(i;rule[i]!='	';i++){

    }
    for(i;rule[i]=='	';i++){
        
    }
    for(i;rule[i]!=' ';i++){
ra1=ra1*10+rule[i]-'0';
    } 
    for(i;rule[i]<'0'||rule[i]>'9';i++){

   }
    for(i;rule[i]!='	';i++){
ra2=ra2*10+rule[i]-'0';
    } 
    for(i;rule[i]=='	';i++){
        
    }
    for(i;rule[i]!=' ';i++){
ra3=ra3*10+rule[i]-'0';
    } 
    for(i;rule[i]<'0'||rule[i]>'9';i++){

   }
    for(i;rule[i]!='	';i++){
ra4=ra4*10+rule[i]-'0';
    }
    for(i;rule[i]=='	';i++){
        
    }
    for(int I=0;I<9;i++,I++){
        dk[I]=rule[i];
    }

 }
  return 0;
}
