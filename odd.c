#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<x;i++){
        if(arr[i]%2==0){
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