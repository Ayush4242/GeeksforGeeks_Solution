class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        stack<int>st;
        vector<int>ans(arr.size(),-1);
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && st.top()>=arr[i]){
                    st.pop();
            }
            if(st.empty()){
                
                st.push(arr[i]);
            }
            else if(st.top()<arr[i]){
                ans[i]=st.top();
                st.push(arr[i]);
            }
        }
        return ans;
    }
    
};