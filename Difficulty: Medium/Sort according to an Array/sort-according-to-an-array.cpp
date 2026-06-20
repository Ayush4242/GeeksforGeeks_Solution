class Solution {
  public:
    void relativeSort(vector<int>& a1, vector<int>& a2) {
        unordered_map<int,int>mp;
        for(auto i:a1){
            mp[i]++;
        }
        int index=0;
        for(auto i:a2){
            if(mp.find(i)!=mp.end()){
                while(mp[i]>0){
                    a1[index]=i;
                    index++;
                    mp[i]--;
                }
                mp.erase(i);
            }
        }
        vector<int>res;
        for(auto i:mp){
            while(i.second>0){
                res.push_back(i.first);
                i.second--;
            }
        }
        sort(res.begin(),res.end());
        for(auto i:res){
            a1[index]=i;
            index++;
        }
        
    }
};
