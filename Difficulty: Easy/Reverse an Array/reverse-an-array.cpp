class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0,j=n-1;      //two pointer approach
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
       
    }
};