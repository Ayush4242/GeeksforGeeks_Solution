class Solution {
  public:
    string firstRepChar(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                return string(1,s[i]);
            }
            else{
                mp[s[i]]++;
            }
        }
        return "-1";
    }
};