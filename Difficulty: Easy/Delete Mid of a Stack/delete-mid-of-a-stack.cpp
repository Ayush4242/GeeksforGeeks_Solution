class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s,int mid){
        if(mid==1){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,mid-1);
        s.push(temp);
    }
    void deleteMid(stack<int>& s) {
        int n=s.size();
        int mid=(n/2)+1;
        solve(s,mid);
        
        
    }
};