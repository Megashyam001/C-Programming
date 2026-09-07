#include<stdio.h>
int main(){
    int x;
    printf("enter the size of the array: ");
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int left=0;
    int right=x-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;

    }
    for(int i=0;i<x;i++){
        printf("%d",arr[i]);
    }
}