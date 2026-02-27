/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int count=0,ans=-1;
  void dfs(Node *root, int k){
      if(root==nullptr){
          return ;
      }
      dfs(root->left,k);
      count++;
      if(count==k){
          ans=root->data;
          return;
      }
      dfs(root->right,k);
      
  }
    int kthSmallest(Node *root, int k) {
        dfs(root,k);
        return ans;
    }
};