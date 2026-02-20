class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int lar=-1,sec=-1;
        for(auto i:arr){
            if(i>lar){
                sec=lar;
                lar=i;
                
            }
            else if(i>sec && i!=lar){
                sec=i;
            }
        }
        return sec;
        
    }
};