//WAP to merge two sorted arrays
#include <stdio.h>
int main() {
    int a[100],b[100],n1,n2;
    printf("enter the size of first and second array:\n");
    scanf("%d%d",&n1,&n2);
    printf("enter first sorted array:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter second sorted array:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    int merge[n1+n2];
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            merge[k]=a[i];
            i++;
        } else {
            merge[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        merge[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        merge[k]=b[j];
        j++;
        k++;
    }
    printf("merged array:\n");
    for(int i=0;i<(n1+n2);i++){
        printf("%d\n",merge[i]);
    }
    return 0;
}