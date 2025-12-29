class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char>st;
        for(auto i:s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(i==')'){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(i=='}'){
                    if(st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
        
    }
};