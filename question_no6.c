#include<stdio.h>
int main(){
    int num=7;
    int i=2;
    int prime;
    for(;i<num;i++){
      prime=num%i;
      if(prime==0){
       break;            
    }
}
if(prime!=0){
  printf("number is prime");           
}
else{
   printf("number is not prime");    
}
}
