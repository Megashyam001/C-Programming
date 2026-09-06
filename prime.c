#include <stdio.h>
#include<stdbool.h>
int main(){
    int x;
    scanf("%d",&x);
    bool isprime=true;
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<x;i++){
        bool isprime=true;
        if(arr[i]<2){
            
            continue;
        }
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                isprime=false;
                break;
            }
            
        }
        if(isprime){
        for(int j=i;j<x-1;j++){
            arr[j]=arr[j+1];
        }
        x--;
        i--;
        
    }

                


        
    }
    for(int i=0;i<x;i++){
        printf("%d",arr[i]);
        }
    
}
