class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int l=0,r=n-1;
        vector<int>ans;
        while(l<r){
            ans.push_back(arr[l]);
            l++;
            ans.push_back(arr[r]);
            r--;
        }
        if(l==r){
            ans.push_back(arr[l]);
        }
        long long s=0;
        for(int i=0;i<ans.size();i++){
            s=s+abs(ans[i]-ans[(i+1)%n]);
        }
        return s;
        
    }
};
