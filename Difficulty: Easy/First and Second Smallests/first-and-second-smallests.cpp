class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int sm=INT_MAX;
        int secsm=INT_MAX;
        for(auto i:arr){
            sm=min(sm,i);
        }
        for(auto i:arr){
            if(i<secsm && i>sm){
                secsm=i;
            }
        }
        vector<int>ans;
        if(secsm==INT_MAX){
            ans.push_back(-1);
            return ans;
        }
        ans.push_back(sm);
        ans.push_back(secsm);
        return ans;
    }
};