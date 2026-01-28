class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int>dq;
        int i=0,j=0;
        vector<int>res;
        while(j<arr.size()){
            if(arr[j]<0){
                dq.push_back(arr[j]);
            }
            if(j-i+1==k){
                if(!dq.empty()){
                    res.push_back(dq.front());
                }
                else{
                    res.push_back(0);
                }
                if(arr[i]<0 && dq.size()>0){
                    dq.pop_front();
                }
                i++;
            }
            j++;
        }
        return res;
    }
};