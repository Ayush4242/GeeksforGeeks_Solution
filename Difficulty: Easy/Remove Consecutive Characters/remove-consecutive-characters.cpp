class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        int i=0,j=1;
        while(i<s.length() && j<s.length()){
            if(s[j]!=s[i]){
                s[i+1]=s[j];
                i++;
            }
            j++;
        }
        string str=s.substr(0,i+1);
        return str;
    }
};