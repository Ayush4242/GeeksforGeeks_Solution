class Solution {
  public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string s=countAndSay(n-1);
        int i=0,j=0;
        string ans="";
        while(j<s.length()){
            if(s[i]==s[j]){
                j++;
            }
            else{
                int len=j-i;
                ans+=to_string(len);
                ans+=s[i];
                i=j;
            }
        }
        int len=j-i;
        ans+=to_string(len);
        ans+=s[i];
        return ans; 
        
    }
};