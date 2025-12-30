class Solution {
  public:
  void insertatbottom(stack<int> &st,int x){
      if(st.empty()){
            st.push(x);
            return ;
        }
        int temp=st.top();
        st.pop();
        
        insertatbottom(st,x);
        st.push(temp);
        
  }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()){
            
            return;
        }
        int top=st.top();
        st.pop();
        reverseStack(st);
        insertatbottom(st,top);
        // st.push(top);
        
    }
};