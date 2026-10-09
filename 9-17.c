#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    int arr[x];
    int arr1[x+1];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
        
    }
    int carry=0;
    for(int i=0;i<x;i++){
        arr1[i]=arr[i]+carry;
        carry=0;
        if(arr1[i]>9){
            carry=arr1[i]/10;
            arr1[i]=arr1[i]%10;
            
        }
        
    }
    arr1[x]=carry;
    for(int i=0;i<x+1;i++){
        printf("%d",arr1[i]);
    }
}
