class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char>st;
        
        for(int i=0;i<s.length();i++){
            bool b=false;
            if(s[i]==')'){
                st.push(s[i]);
            
            while(st.size()>0 && st.top()!='('){
                char top=st.top();
                if(top=='+' ||top=='-' || top=='*' ||top=='/'){
                    b=true;
                    
                }
                st.pop();
            }
            st.pop();
            if(b==false){
                return true;
            }
            
        }
        st.push(s[i]);
        }
        return false;
        
    }
};
