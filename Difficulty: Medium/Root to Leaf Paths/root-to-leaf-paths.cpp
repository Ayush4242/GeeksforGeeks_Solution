/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>>ans;
        vector<int>path;
        dfs(root,ans,path);
        return ans;
    }
    void dfs(Node* root,vector<vector<int>>& ans,vector<int>& path){
        if(root==nullptr){
            return;
        }
        path.push_back(root->data);
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(path);
        }
        dfs(root->left,ans,path);
        dfs(root->right,ans,path);
        path.pop_back();
        
        
    }
};