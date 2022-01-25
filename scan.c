#include<stdio.h>
int main(){
   char packet[1024];  
 FILE *fp;            
 int len;             
    fp = fopen("packet1.txt","r");
    while(fgets(packet,1024,fp) != NULL) {
     long long int pk1,pk2;
     int pk3,pk4,pk5;
     sscanf(packet,"%lld %lld %d %d %d",&pk1,&pk2,&pk3,&pk4,&pk5);
    
    
 } return 0;
}
