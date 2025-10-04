#include<stdio.h>
int main(){
    int n=121;
    int reverse=0;
   int original=n;
    while(n!=0){
        int num=n%10;
        reverse=reverse*10+num;
        n=n/10;        
}
 if(original==reverse){
    printf("%d is a palindrome",original);            
} 
else{
   printf("%d is not a palindrome",original);  
}  
    
}
