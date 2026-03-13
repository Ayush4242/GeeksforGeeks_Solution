class Solution {
  public:
    int maxValue(vector<int> &arr) {
        int mod = 1e9 + 7;
        sort(arr.begin(),arr.end());
        int mult=1,s=0;
        for(int i=0;i<arr.size();i++){
            s=(s+(long long)arr[i]*i)%mod;
        }
        
        return s ;
    }
};