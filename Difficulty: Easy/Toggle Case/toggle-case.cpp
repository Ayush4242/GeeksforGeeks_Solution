class Solution {
  public:
    string toggleCase(string &s) {
        string str="";
        for(auto i:s){
            if(i>='a' && i<='z'){
                str+=toupper(i);
            }
            else{
                str+=tolower(i);
            }
        }
        return str;
        
    }
};