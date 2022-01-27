#include<stdio.h>
int packet(char *pp,long long int *O){
   char packet[1024];  
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
   R(O);
 
 
 
 
 
 
 
 
 
 
 } return 0;
}
