class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<pair<int,int>>ans;
        for(int i=0;i<val.size();i++){
            ans.push_back({val[i],wt[i]});
        }
        sort(ans.begin(),ans.end(),[](pair<int,int>&a,pair<int,int>&b){
            return (double)a.first/a.second>(double)b.first/b.second;
        });
        double s=0;
        for(int i=0;i<ans.size();i++){
            
            if(capacity-ans[i].second>=0){
                capacity-=ans[i].second;
                s+=ans[i].first;
            }
            else{
                s+=((double)ans[i].first/ans[i].second)*capacity;
                break;
                
            }
            
        }
        return s;
        
        
    }
};
