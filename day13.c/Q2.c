//WAP to find sum and average of array
#include <stdio.h>
int main() {
    int n,i,s=0,a[100];
    float av;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    printf("sum of elements of array is %d\n",s);
    av=(float)(s/n);
    printf("average of elements of array is %f",av);
    return 0;
}