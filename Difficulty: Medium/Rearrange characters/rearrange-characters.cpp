class Solution {
  public:
    string rearrangeString(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string str="";
        while(pq.size()>1){
            pair<int,char>one=pq.top();
            pq.pop();
            pair<int,char>two=pq.top();
            pq.pop();
            str+=one.second;
            str+=two.second;
            one.first--;
            two.first--;
            if(one.first>0){
                pq.push({one.first,one.second});
            }
            if(two.first>0){
                pq.push({two.first,two.second});
            }
            if(pq.size()==1 && pq.top().first>1){
                return ""; 
            }
            if(pq.size()==1 && pq.top().first==1){
                str+=pq.top().second;
            }
            
        }
        return str;
        
        
    }
};