#include<stdio.h>
int main(){
    int x;
    printf("enter the size of the array: ");
    scanf("%d",&x);
    int count=0;
    int newarr[x];
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
                }
                count++;
    }
    for(int i=0;i<count;i++){
        int sum=0;
        while(arr[i]!=0){
            int y=arr[i]%10;
            sum+=y;
            arr[i]=arr[i]/10;
        }
        newarr[i]=sum;
    }
    for(int i=0;i<count;i++){
        for(int  j=0;j<count-1;j++){
            if(newarr[j]>newarr[j+1]){
                int temp =newarr[j];
                newarr[j]=newarr[j+1];
                newarr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%d ",newarr[i]);
    }
}
