class Solution {
  public:
    string rearrangeString(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(pq.size()>1){
            auto o=pq.top();
            pq.pop();
            auto t=pq.top();
            pq.pop();
            str+=o.second;
            str+=t.second;
            o.first--;
            t.first--;
            if(o.first>0){
                pq.push(o);
            }
            if(t.first>0){
                pq.push(t);
            }
        }
        if(pq.size()==1){
            if(pq.top().first>1){
                return "";
            }
            else{
                str+=pq.top().second;
            }
        }
        return str;
        
    }
};