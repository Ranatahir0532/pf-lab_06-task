#include<stdio.h>
int main(){
    int a=0;
    while(a<20){
       ++a;          
       int num=a%2;
       if(num==0){
       continue;           
       }
      else{
       printf("%d\n",a);    
           }           
}
    }
