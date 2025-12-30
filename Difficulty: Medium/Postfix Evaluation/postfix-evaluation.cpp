class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int>st;
        for(auto i:arr){
            if(i=="+" || i=="-" || i=="*" || i=="/" || i=="^"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(i=="+"){
                    st.push(a+b);
                }
                if(i=="-"){
                    st.push(a-b);
                }
                if(i=="*"){
                    st.push(a*b);
                }
                if(i=="^"){
                    st.push(pow(a,b));
                }
                if(i=="/"){
                    int res = a / b;
                    if ((a ^ b) < 0 && a % b != 0)
                        res--;
                    st.push(res);
                }
            }
            else{
                st.push(stoi(i));
            }
        }
        return st.top();
        
    }
};