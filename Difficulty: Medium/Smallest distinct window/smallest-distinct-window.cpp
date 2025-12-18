class Solution {
  public:
    int findSubString(string& str) {
        unordered_set<int>st;
        for(auto i:str){
            st.insert(i);
        }
        int mini=INT_MAX;
        unordered_map<char,int>mp;
        int size1=st.size(),n=str.length(),i=0,j=0;
        while(j<n){
            mp[str[j]]++;
            if(mp.size()==size1){
            while(mp[str[i]]>1){
                mp[str[i]]--;
                i++;
            }
            mini=min(mini,j-i+1);
            }
            j++;
        }
        return mini;
        
    }
};