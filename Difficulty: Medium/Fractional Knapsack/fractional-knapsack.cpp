class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<pair<int,int>>vec;
        for(int i=0;i<val.size();i++){
            vec.push_back({val[i],wt[i]});
        }
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            return (double)a.first/a.second>(double)b.first/b.second;
        });
        double res=0.0,sum=0.0;
        int i=0,j=0;
        for(int i=0;i<vec.size();i++){
            if(sum+vec[i].second<=capacity){
            sum+=vec[i].second;
            res+=vec[i].first;
            }
            else{
                int rem=capacity-sum;
                res+=((double)rem/vec[i].second)*vec[i].first;
                break;
            }
        }
        return res;
        
        
    }
};
