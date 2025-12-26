class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        sort(prices.begin(),prices.end());
        // Code here
        int mini=0,i=0,j=prices.size()-1;
        while(i<=j){
            mini+=prices[i];
            j-=k;
            i++;
        }
        int x=prices.size()-1,l=0,s=0;
        while(x>=l){
            s+=prices[x];
            l+=k;
            x--;
        }
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(s);
        return ans;
    }
};