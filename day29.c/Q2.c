//WAP to create menu driven array operation system
#include <stdio.h>
void displayarray(int arr[],int size);
int insert(int arr[],int size,int element,int p);
int delete(int arr[],int size,int position);
int linearsearch(int arr[],int size,int target);
int main() {
    int size,arr[100]={0},choice,target,element,position,p;
    printf("=== ARRAY OPERATION SYSTEM ===\n");
    printf("enter initial size of array<=100:\n");
    scanf("%d",&size);
    if(size>100 || size<0){
        printf("invalid size! setting initial size to 0\n");
        size=0;
    } else {
        printf("enter elements:\n");
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    }
    while(choice!=5){
        printf("\n1-display array\n");
        printf("2-insert an element\n");
        printf("3-delete an element\n");
        printf("4-search an element\n");
        printf("5-exit\n");
        printf("enter your choice from 1 to 5:");
        scanf("%d",&choice);
        switch(choice){
            case 1: displayarray(arr,size);
            break;
            case 2: printf("enter element to insert:");
                    scanf("%d",&element);
                    printf("enter position:");
                    scanf("%d",&p);
                    size=insert(arr,size,element,p);
                    printf("now size of array is %d\n",size);
                    break;
            case 3: printf("enter position of element you want to delete:");
                    scanf("%d",&position);
                    size=delete(arr,size,position);
                    printf("now size of array is %d\n",size);
                    break;
            case 4: printf("enter element you want to search:");
                    scanf("%d",&target);
                    printf("position of %d in array is %d\n",target,linearsearch(arr,size,target));
                    break;
            case 5: printf("exiting...\n");
                    break;
            default:printf("invalid choice\n");
                    break;
        }
    }
    return 0;
}
void displayarray(int arr[],int size){
    if(size==0){
        printf("array is empty\n");
    } else {
        printf("array :\n");
        for(int i=0;i<size;i++){
          printf("%d\n",arr[i]);
        }
    }
}
int insert(int arr[],int size,int element,int p){
    if(size==0){
        printf("array is empty\n");
        return 0;
    } 
    for(int i=size-1;i>=p;i--){
        arr[i+1]=arr[i];
    }
    arr[p]=element;
    return size+1;
}
int delete(int arr[],int size,int position){
    if(size==0){
        printf("array is empty\n");
        return 0;
    }
    for(int i=position;i<size;i++){
        arr[i]=arr[i+1];
    } 
    return size-1;
}
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i+1;
            break;
        }
    }
}