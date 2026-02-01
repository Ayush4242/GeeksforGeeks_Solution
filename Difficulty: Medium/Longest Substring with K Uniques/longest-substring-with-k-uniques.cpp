class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char,int>mp;
        int maxi=-1;
        int j=0,i=0;
        while(j<s.length()){
            mp[s[j]]++;
            while(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            if(mp.size()==k){
                maxi=max(maxi,j-i+1);
            }
            j++;
        }
        return maxi;
        
    }
};