class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int mini=INT_MAX;
        for(int i=0;(i+m-1)<a.size();i++){
            mini=min(mini,a[i+m-1]-a[i]);
        }
        return mini;
        
    }
};