//WAP to convert decimal into binary
#include <stdio.h>
int main(){
    int decimal, i=0;
    int binary[32];
    printf("enter the decimal\n");
    scanf("%d",&decimal);
    printf("binary equivalent:\n");
    if(decimal==0){
        printf("%d",0);
    }
    while(decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    return 0;
}