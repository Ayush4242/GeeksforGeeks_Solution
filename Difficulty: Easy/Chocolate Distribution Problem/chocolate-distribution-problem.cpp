class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int n=a.size(),mini=INT_MAX;
        for(int i=0;i+m-1<n;i++){
            mini=min(mini,a[i+m-1]-a[i]);
        }
        return mini;
        
    }
};