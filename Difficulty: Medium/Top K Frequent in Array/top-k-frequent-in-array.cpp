class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto i:arr){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(!pq.empty() && k>0){
            res.push_back({pq.top().second});
            k--;
            pq.pop();
        }
        return res;
        
        
    }
};
