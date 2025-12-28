class Solution {
  public:
    int maxValue(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        const int MOD = 1e9 + 7;
        long long s = 0;
        // int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            s=(s+(long long)arr[i]*i)%MOD;
            // maxi=max(maxi,s);
        }
        return s;
    }
};