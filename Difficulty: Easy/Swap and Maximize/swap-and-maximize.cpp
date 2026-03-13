class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        vector<int>ans;
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        if(arr.size()%2==0){
        while(i<=j){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
            }
        }
        else{
            while(i<j){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
            }
            ans.push_back(arr[i]);
        }
        int sum=0;
        for(int i=1;i<arr.size();i++){
            sum+=abs(ans[i]-ans[i-1]);
        }
        sum+=abs(ans[0]-ans[arr.size()-1]);
        return sum;
        
    }
};
