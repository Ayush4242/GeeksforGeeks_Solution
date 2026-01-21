class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int i=0,j=0,maxi=INT_MIN;
        unordered_map<char,int>mp;
        while(j<s.length()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
        
        
    }
};
