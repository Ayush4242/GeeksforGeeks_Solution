class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>q;
        int j=0,i=0;
        vector<int>res;
        while(j<arr.size()){
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
                if(arr[i]<0 && q.size()>0){
                    q.pop_front();
                }
                i++;
            }
            j++;
            
        }
        return res;
        
    }
};