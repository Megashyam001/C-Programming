#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    int n=0;
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
        }
        n++;
    
        
        
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    

}