class Solution {
  public:
    int maxProfit(vector<int> &arr) {
        // code here
        int buy=arr[0];
        int maxprofit=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>buy){
                int profit=arr[i]-buy;
                maxprofit=max(profit,maxprofit);
            }
            else{
                buy=arr[i];
            }
        }
        return maxprofit;
    }
};
