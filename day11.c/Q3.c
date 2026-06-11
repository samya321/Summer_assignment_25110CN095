//WAP to write a function to check prime
#include <stdio.h>
int main() {
    int n;
    void prime(int);
    printf("enter the number\n");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n) {
   int i,c=0;
   for(i=2;i<n;i++){
    if(n%i==0){
        c++;
    }
   }
   if(c==0){
    printf("prime number");
   } else {
    printf("not prime number");
   }

}