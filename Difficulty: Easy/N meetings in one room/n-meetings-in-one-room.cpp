class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>>ans;
        for(int i=0;i<start.size();i++){
            ans.push_back({start[i],end[i]});
        }
        sort(ans.begin(),ans.end(),[](pair<int,int> &a,pair<int,int> &b){
                return a.second<b.second;
            
        });
        int time=ans[0].second,c=1;
        for(int i=1;i<ans.size();i++){
            if(ans[i].first>time){
                c++;
                time=ans[i].second;
            }
            
        }
        return c;
        
    }
};