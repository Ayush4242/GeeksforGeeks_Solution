class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<int>pq;
        for(auto i:mp){
            pq.push(i.second);
        }
        while(!pq.empty() && k>0){
            int t=pq.top();
            t--;
            k--;
            pq.pop();
            pq.push(t);
            
        }
        int sum=0;
        while(!pq.empty()){
            int t=pq.top();
            sum+=(t*t);
            pq.pop();
        }
        return sum;
    }
};