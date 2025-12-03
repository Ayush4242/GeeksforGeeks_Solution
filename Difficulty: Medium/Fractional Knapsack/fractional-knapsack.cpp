class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        vector<pair<int,int>>merge;
        for(int i=0;i<val.size();i++){
            merge.push_back({val[i],wt[i]});
        }
        sort(merge.begin(),merge.end(),[](pair<int,int>&a,pair<int,int>&b){
            double r1=double(a.first)/a.second;
            double r2=double(b.first)/b.second;
            return r1>r2;
        });
        double total=0.0;
        for(int i=0;i<merge.size();i++){
            int value=merge[i].first;
            int weight=merge[i].second;
            if(weight<capacity){
                total+=value;
                capacity-=weight;
            }
            else{
                total+=((double)value/weight)*capacity;
                break;
            }
        }
        return total;
        
    }
};
