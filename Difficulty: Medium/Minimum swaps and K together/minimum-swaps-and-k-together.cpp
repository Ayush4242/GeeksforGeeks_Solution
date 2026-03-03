// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        int i=0,j=0,ws=0,mini=INT_MAX;
        for(auto i:arr){
            if(i<=k){
                ws++;
            }
        }
        int be=0;
        while(j<arr.size()){
            if(arr[j]>k){
                be++;
            }
            if(j-i+1>ws){
                if(arr[i]>k){
                    be--;
                }
                i++;
            }
            if(j-i+1==ws){
                mini=min(mini,be);
            }
            j++;
        }
        return mini;
    }
};
