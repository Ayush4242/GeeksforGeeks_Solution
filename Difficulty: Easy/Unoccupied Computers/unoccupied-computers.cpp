class Solution {
  public:
    int solve(int n, string s) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        int copen=0;
        for(auto i:s){
            if(mp.find(i)==mp.end() && mp1.find(i)==mp1.end()){
                if(copen>=n){
                    mp1[i]++;
                }
                else{
                mp[i]++;
                copen++;
                }
            }
            else{
                if(mp.find(i)!=mp.end()){
                    mp.erase(i);
                     copen--;
                }
                
               
            }
            
        }
        return mp1.size();
        
    }
};
