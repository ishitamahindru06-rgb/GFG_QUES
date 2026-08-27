class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int s=0;
        int mid;
        int e=arr.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            for(int i=0;i<arr.size();i++){
                if(arr[i]==k){
                    return true;
                }
                else if(arr[i]>k){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            return false;
            
        }
    }
};