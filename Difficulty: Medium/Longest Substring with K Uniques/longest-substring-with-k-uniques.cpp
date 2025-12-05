class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int i=0,j=0,maxi=-1;
        unordered_map<char,int>mp;
        int n=s.length();
        while(j<n){
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