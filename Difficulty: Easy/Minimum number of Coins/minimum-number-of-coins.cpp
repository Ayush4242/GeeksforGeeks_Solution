class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int>ans{10,5,2,1};
        // sort(ans.begin(),ans.end(),greater<>());
        int s=0,i=0;
        while(n>0){
            if(ans[i]<=n){
                s+=(n/ans[i]);
                n=n%ans[i];
            }
            i++;
        }
        return s;
        
    }
};