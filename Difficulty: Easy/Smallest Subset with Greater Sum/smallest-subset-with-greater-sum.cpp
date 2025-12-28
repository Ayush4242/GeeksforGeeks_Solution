// User function Template for C++

class Solution {
  public:
    // Function to find the minimum number of elements in the first subset.
    int minSubset(vector<int> &arr) {
        int s=0;
        for(auto i:arr){
            s+=i;
        }
        int c=1,s1=0;
        sort(arr.begin(),arr.end(),greater<>());
        for(auto i:arr){
            s1+=i;
            int rem=s-s1;
            if(s1>rem){
                return c;
            }
            else{
                c++;
                
            }
        }
        return c;
        
    }
};