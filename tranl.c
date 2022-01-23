//转换规则集成为十进制

#include<stdio.h>
#include<string.h>
long long int ip1(char *oip1){
    int l;
    int a[4];
    int f=0;
    int flag=0;
    int p[32];
    long long int H=0;
    long long int M=1;
    
for(int i=0;oip1[i]!='\n';i++){
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
