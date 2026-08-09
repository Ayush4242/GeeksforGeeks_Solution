class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int i=0,j=m-1,mini=INT_MAX;
        while(j<a.size() && i<a.size()){
            mini=min(mini,(a[j]-a[i]));
            i++;
            j++;
        }
        return mini;
        
    }
};