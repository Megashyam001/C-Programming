class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int left=0;
        int right=arr.size()-1;
        int count=0;
        while(left<=right){
            if(arr[left]<=arr[right]){
                break;
            }
             int max=0;
             int num=arr[left]-arr[right];
             if(num>=max){
                max=num;
                left=left+1;
                count++;
                
            }
        }
        return count;
        
    }
};
