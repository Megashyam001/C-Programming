#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    int count=0;
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0 ){
            break;
        }
        count++;
        

    }
    if(count==4 && arr[0]==arr[count-1]){
        printf("success");
    }else{
        printf("failure");
    }

}