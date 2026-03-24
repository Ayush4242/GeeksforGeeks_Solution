class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char,int>mp;
        int i=0,j=0,maxi=-1;
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