class Solution {
  public:
    string chooseandswap(string str) {
        set<int>st;
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
                char ch2=str[i];
                for(int j=0;j<str.length();j++){
                    if(str[j]==ch2){
                        str[j]=ch;
                    }
                    else if(str[j]==ch){
                        str[j]=ch2;
                    }
                }
                break;
            }
        }
        return str;
    }
};
