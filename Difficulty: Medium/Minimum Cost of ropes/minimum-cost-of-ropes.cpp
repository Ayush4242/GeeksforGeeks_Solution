class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:arr){
            pq.push(i);
        }
        if(arr.size()<2){
            return 0;
        }
        int sum=0;
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            sum+=(a+b);
            pq.push(a+b);
        }
        return sum;
    }
};