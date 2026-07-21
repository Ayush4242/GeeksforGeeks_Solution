class Solution {
  public:
    string firstRepChar(string s) {
        unordered_map<char,int>mp;
        char ch=' ';
        for(auto i:s){
            if(mp.find(i)!=mp.end()){
                ch=i;
                break;
            }
            else{
                mp[i]++;
            }
        }
        string res="";
        res+=ch;
        return res==" "?"-1":res;
    }
};