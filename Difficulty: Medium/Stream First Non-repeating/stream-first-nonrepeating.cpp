class Solution {
  public:
    string firstNonRepeating(string &s) {
        unordered_map<char,int>mp;
        queue<char>q;
        string str="";
        for(auto i:s){
            mp[i]++;
            q.push(i);
            while(!q.empty() && mp[q.front()]>1){
                q.pop();
            }
            if(q.empty()){
                str+="#";
            }
            else{
                str+=q.front();
            }
        }
        return str;
        
    }
};