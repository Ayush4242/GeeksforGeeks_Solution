class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int first=-1,last=-1,c=0;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                if(c==0){
                    first=i;
                    last=i;
                    c++;
                }
                else{
                    last=i;
                }
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};