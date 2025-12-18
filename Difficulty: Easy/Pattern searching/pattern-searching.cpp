// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // your code here
        int len=pat.length();
        // string str="";
        for(int i=0;i<txt.length();i++){
            string str=txt.substr(i,len);
            if(str==pat){
                return true;
            }
            
        }
        return false;
    }
};
