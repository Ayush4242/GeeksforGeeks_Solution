class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<int,int>>ans;
        for(int i=0;i<val.size();i++){
            ans.push_back({val[i],wt[i]});
        }
        sort(ans.begin(),ans.end(),[](pair<int,int>&a,pair<int,int>&b){
            return (double)a.first/(double)a.second>(double)b.first/(double)b.second;
        });
        double res=0;
        int s=0;
        for(int i=0;i<ans.size();i++){
            if(s+ans[i].second>capacity){
                int rem=capacity-s;
                res+=((double)rem/ans[i].second)*ans[i].first;
                break;
            }
            else{
                s+=ans[i].second;
                res+=ans[i].first;
            }
        }
        return res;
    }
};
