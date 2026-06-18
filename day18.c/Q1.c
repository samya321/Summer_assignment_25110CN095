//WAP to bubble sort
#include <stdio.h>
int main() {
    int n,a[100],t;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("now the array is\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}