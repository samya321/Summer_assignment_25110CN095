//WAP for selection sort
#include <stdio.h>
int main() {
    int n,a[100];
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
    printf("now the array\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}