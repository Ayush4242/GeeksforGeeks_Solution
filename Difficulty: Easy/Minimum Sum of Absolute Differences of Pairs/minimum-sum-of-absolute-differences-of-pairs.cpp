// User function Template for C++

class Solution {
  public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N) {
        sort(A.begin(),A.end(),greater<>());
        sort(B.begin(),B.end(),greater<>());
        int i=0,j=0;
        long long s=0;
        while(i<A.size() && j<B.size()){
            s+=abs(A[i]-B[j]);
            i++;
            j++;
        }
        return s;
    }
};