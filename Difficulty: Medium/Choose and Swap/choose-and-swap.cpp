class Solution {
  public:
    string chooseandswap(string str) {
        set<char>st;
        for(auto i:str){
            st.insert(i);
        }
        for(int i=0;i<str.length();i++){
            st.erase(str[i]);
            if(st.empty()){
                break;
            }
            char ch=*st.begin();
            if(ch<str[i]){
                char ch1=str[i];
                for(int j=0;j<str.length();j++){
                    if(str[j]==ch){
                        str[j]=ch1;
                    }
                    else if(str[j]==ch1){
                        str[j]=ch;
                    }
                }
                break;
            }
        }
        return str;
        
    }
};
