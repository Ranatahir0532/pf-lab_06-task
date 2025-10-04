#include<stdio.h>
int main(){
    int a,b,n,c,i;
    n=10;
    a=0;
    b=1;
    i=1;
    for(;i<=n;i++){
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;       
            }
      return 0;      
    }
