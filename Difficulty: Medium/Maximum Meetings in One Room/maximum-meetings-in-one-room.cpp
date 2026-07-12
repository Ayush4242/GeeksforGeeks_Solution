class Solution {
  public:
    vector<int> maxMeetings(vector<int> &s, vector<int> &f) {
        vector<pair<pair<int,int>,int>>vec;
        for(int i=0;i<s.size();i++){
            vec.push_back({{s[i],f[i]},i});
        }
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            if(a.first.second==b.first.second){
                return a.second<b.second;
            }
            return a.first.second<b.first.second;
        });
        int st=vec[0].first.first,end=vec[0].first.second;
        vector<int>ans;
        ans.push_back(vec[0].second + 1);
        for(int i=1;i<vec.size();i++){
            if(vec[i].first.first>end){
                ans.push_back(vec[i].second+1);
                st=vec[i].first.first;
                end=vec[i].first.second;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};