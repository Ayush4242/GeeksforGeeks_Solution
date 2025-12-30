class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        
        for(int i=0;i<mat.size();i++){
            bool isCelebrity=true;
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    continue;
                }
                if(mat[i][j]==1 || mat[j][i]==0){
                    isCelebrity = false;
                    break;
                }
                
            }
            if(isCelebrity){
                return i;
            }
        }
        return  -1;
        
    }
};