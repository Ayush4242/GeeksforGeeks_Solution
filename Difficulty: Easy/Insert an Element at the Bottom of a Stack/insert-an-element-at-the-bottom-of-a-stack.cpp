// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        // st.push(x);
        stack<int>ans;
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        ans.push(x);
        stack<int>ans1;
        while(!ans.empty()){
            ans1.push(ans.top());
            ans.pop();
        }
        // ans.push(x);
        return ans1;
        
        
    }
};