// User function Template for C++

class Solution {
  public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long s=0;
        for(int i=0;i<A.size();i++){
            s+=abs(A[i]-B[i]);
        }
        return s;
    }
};