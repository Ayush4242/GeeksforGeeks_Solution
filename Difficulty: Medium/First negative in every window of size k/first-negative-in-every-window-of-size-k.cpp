class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int>dq;
        vector<int>st;
        int i=0,j=0;
        while(j<arr.size()){
            if(arr[j]<0){
                dq.push_back(arr[j]);
            }
            if(j-i+1>k){
                if(arr[i]==dq.front()){
                    dq.pop_front();
                    
                }
                i++;
            }
            if(j-i+1==k){
                if(dq.size()>0){
                    st.push_back(dq.front());
                    // dq.pop_front();
                }
                else{
                    st.push_back(0);
                }
                
            }
            
            j++;
        }
        return st;
        
    }
};