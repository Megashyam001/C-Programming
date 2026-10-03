#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int arr[x];
    int arr1[x];
    int arr2[x+1];
    int carry=0;
    printf("enter the array 1 elements");
    for(int i=0;i<x;i++){
        
        scanf("%d",&arr[i]);
    }
    printf("enter the array 2 elements");
    for(int i=0;i<x;i++){
       
        scanf("%d",&arr1[i]);
    }
        for(int i=x-1;i>=0;i--){
            
            arr2[i+1]=arr[i]+arr1[i]+carry;
            carry=0;
            if(arr2[i+1]>9){
                carry=arr2[i+1]/10;
                arr2[i+1]=arr2[i+1]%10;
            }


        }
        arr2[0]=carry;
        printf("the sum of the arrays is: ");
        for(int i=0;i<x+1;i++){
            printf("%d",arr2[i]);
        }
}
