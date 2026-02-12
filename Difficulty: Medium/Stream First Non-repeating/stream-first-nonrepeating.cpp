class Solution {
  public:
    string firstNonRepeating(string &s) {
        queue<char>q;
        unordered_map<char,int>mp;
        string res="";
        for(auto i:s){
            mp[i]++;
            q.push(i);
        
        while(!q.empty() && mp[q.front()]>1){
            q.pop();
        }
        if(q.empty()){
            res+="#";
        }
        else{
            res+=q.front();
        }
        }
        
        return res;
    }
};