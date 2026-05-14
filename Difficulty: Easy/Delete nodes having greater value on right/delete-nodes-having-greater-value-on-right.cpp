/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
        stack<int>st;
        Node *temp=head;
        while(temp!=nullptr){
            while(!st.empty() && temp->data>st.top()){
                st.pop();
                
            }
            st.push(temp->data);
            temp=temp->next;
        }
        
        Node *newhead=nullptr;
        while(!st.empty()){
            Node *newnode=new Node(st.top());
            st.pop();
            newnode->next=newhead;
            newhead=newnode;
        }
        return newhead;
        
        
        
    }
};