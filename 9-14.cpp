#include<iostream>
using namespace std;
#include<vector>
int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            break;
        }
        count++;
    }
    int sum=0;
    for(int i=0;i<count;i++){
        sum=sum+arr[i];

    }
    int left=0;
    int right=count-1;
    if(sum%2!=0){
        int middle=(left+right)/2;
        cout<<arr[middle]<<endl;

    }else{
        int middle=(left+right)/2;
        int avg=(arr[middle]+arr[middle+1])/2;
        cout<<avg<<endl;
    }

}