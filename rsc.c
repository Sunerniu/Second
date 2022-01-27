#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024

long long int ip1(char *oip1){
    int l;
    int a[4]={0};
    int f=0;
    int flag=0;
    int p[32];
    long long int H=0;
    long long int M=1;
    
for(int i=0;oip1[i]!='\0';i++){
    if(flag==0){
    a[f]=oip1[i]-'0';
    flag=1;}
    else {
       if(oip1[i]!='.'){
        a[f]=a[f]*10+oip1[i]-'0';
}       else{
            f++;
            flag=0;
} 
    }

}

for(l=0;a[3]!=0;l++){
    if(a[3]%2==1)
    p[l]=1;
    else p[l]=0;
    a[3]=a[3]/2;
}
for(l;a[2]!=0;l++){
    if(a[2]%2==1)
    p[l]=1;
    else p[l]=0;
    a[2]=a[2]/2;
}
for(l;a[1]!=0;l++){
    if(a[1]%2==1)
    p[l]=1;
    else p[l]=0;
    a[1]=a[1]/2;
}
for(l;a[0]!=0;l++){
    if(a[0]%2==1)
    p[l]=1;
    else p[l]=0;
    a[0]=a[0]/2;
}

for(int m=0;m<l;m++){

   if(p[m]==1){ 
     
    H+=M;

}  

M=M*2;

    
}
return H;
}   
//输入IP地址转出十进制

void packet(char *pp){
   char packet[1024]; 
    long long int *O;
   FILE *fp;            
   int len;             
    fp = fopen(pp,"r");
    while(fgets(packet,1024,fp) != NULL) {
     long long int pk1,pk2;
     int pk3,pk4,pk5;
     sscanf(packet,"%lld %lld %d %d %d",&pk1,&pk2,&pk3,&pk4,&pk5);
    O[0]==pk1;
    O[1]==pk2;
    O[2]==pk3;
    O[3]==pk4;
    O[4]==pk5;
    printf("%d",R(O));
 
 
 
 
 
 
 
 
 
 } 
}


int R(char *P)
{int li=0;
 char rule[MAX_LINE];  
 FILE *fp;            
 int len;             
fp = fopen("rule1.txt","r");
 while(fgets(rule,MAX_LINE,fp) != NULL)
 {  li++;
     int u=0;
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


long long int u1=ip1(rule1);
long long int u2=ip1(rule2);
if(P[0]==u1){
    if(P[1]==u2)
    {
        if(P[2]>=ra1&&P[3]<=ra2){
        if(P[3]>=ra3&&P[4]<=ra3){
                    if(dk[8]=='0')
                    {
                        break;
                    }
                    else {
                        if((dk[2]-'0')*16+dk[3]-'0'==P[4]
                                break;

                    }
        }
        }
    }
}





 }
  return li;
}
