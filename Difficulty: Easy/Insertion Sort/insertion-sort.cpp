class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int temp=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>temp){
                arr[j]>temp;
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
    }
};