class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        stack<int>st;
        vector<int>res;
        
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                res.push_back(-1);
                
            }
            else{
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
            
            res.push_back(st.top());
            }
            else{
                res.push_back(-1);
            }
        }
            st.push(arr[i]);
        }
        return res;
        
    }
};