class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>q;
        int i=0,j=0;
        vector<int>res;
        int n=arr.size();
        while(j<n){
            if(arr[j]<0){
                q.push_back(arr[j]);
            }
            if(j-i+1==k){
                if(!q.empty()){
                    res.push_back(q.front());
                }
                else{
                    res.push_back(0);
                }
                if(arr[i]<0 && !q.empty()){
                q.pop_front();
                }
                i++;
            }
            
            j++;
        }
        return res;
        
    }
};