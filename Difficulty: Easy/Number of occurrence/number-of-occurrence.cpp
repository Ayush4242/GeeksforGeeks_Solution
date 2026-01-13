class Solution {
  public:
    int left(vector<int>& arr, int target){
        int n=arr.size();
        int low=0,high=n-1,c1=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                c1=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return c1;
        
    }
    int right(vector<int>& arr, int target){
        int n=arr.size();
        int low=0,high=n-1,c2=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                c2=mid;
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return c2;
    }
    int countFreq(vector<int>& arr, int target) {
        int left1=left(arr,target);
        int right1=right(arr,target);
        int res=right1-left1+1;
        if(left1==-1 && right1==-1){
            return 0;
        }
        return res;
    }
};
